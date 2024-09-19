#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

const int mod = 1e9+7;
const int MxN = 1e5+2;
int dp[MxN][102];

int32_t main()
{
    fastIO;
    int n,m;
    cin >> n >> m;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }

    if( x[0] == 0 ){
        for(int i=1;i<=m;i++){
            dp[0][i] = 1;
        }
    }else dp[0][x[0]] = 1;

    for(int i=1;i<n;i++){
        if( x[i] == 0 ){
            for(int j=1;j<=m;j++){
                dp[i][j] += dp[i-1][j];
                if(j>1) dp[i][j] += dp[i-1][j-1];
                if(j<m) dp[i][j] += dp[i-1][j+1];
                dp[i][j] %= mod;
            }
        } else {
            int j = x[i];
            dp[i][j] += dp[i-1][j];
            if(j>1) dp[i][j] += dp[i-1][j-1];
            if(j<m) dp[i][j] += dp[i-1][j+1];
            dp[i][j] %= mod;
        }
    }

    /* for(int i=0;i<n;i++){
        for(int j=0;j<=m;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }*/
    int ans = 0;
    for(int i=1;i<=m;i++){
        // cout << dp[n-1][i] << " ";
        ans += dp[n-1][i];
        ans %= mod;
    }
    cout << ans << endl;




    return 0;
}





