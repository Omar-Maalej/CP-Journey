#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

const int mod = 1e9+7;

const int MxN = 1001;

int dp[MxN][MxN];

int32_t main()
{
    fastIO;
    int n;
    cin >> n;
    char grid[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++)
            cin >> grid[i][j];
    }

    if(grid[0][0] == '*' || grid[n-1][n-1] == '*'){
        cout << 0 << endl;
        return 0;
    }

    dp[0][0] = 1;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            dp[i][j] %= mod;
            if(grid[i][j] == '.'){
                if(i<n-1)dp[i+1][j] += dp[i][j];
                if(j<n-1)dp[i][j+1] += dp[i][j];
            }
        }
    }

    cout << dp[n-1][n-1] << endl;

    return 0;
}






