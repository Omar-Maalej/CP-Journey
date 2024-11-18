#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

const int MxN = 1e5 + 5;
int dp[3][MxN];

int32_t main()
{
    fastIO;
    int n;
    cin >> n;
    vector<vector<int>> days(n, vector<int>(3));
    for(int i=0;i<n;i++){
        int a,b,c;
        cin >> a >> b >> c;
        days[i][0] = a;
        days[i][1] = b;
        days[i][2] = c;
    }
    dp[0][0] = days[0][0];
    dp[1][0] = days[0][1];
    dp[2][0] = days[0][2];

    for(int i=1;i<n;i++){
        dp[0][i] = max(dp[1][i-1], dp[2][i-1]) + days[i][0];
        dp[1][i] = max(dp[0][i-1], dp[2][i-1]) + days[i][1];
        dp[2][i] = max(dp[1][i-1], dp[0][i-1]) + days[i][2];
        //cout << dp[0][i] << " " << dp[1][i] << " " << dp[2][i] << endl;
    }
    int ans = 0;
    for(int i=0;i<3;i++){
        //cout << dp[i][n-1] << endl;
        ans = max(ans, dp[i][n-1]);
    }
    cout<< ans << endl;

    return 0;
}






