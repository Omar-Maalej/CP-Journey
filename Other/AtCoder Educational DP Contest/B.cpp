#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

const int MxN = 1e5 + 5;
int dp[MxN];

int32_t main()
{
    fastIO;
    int n, k;
    cin >> n >> k;
    int h[n];
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    for(int i=2;i<n;i++){
        int mn = 2e9;
        for(int j = 1; j <= k && i-j >= 0; j++){
            mn = min(mn, dp[i-j] + abs(h[i] - h[i-j]));
        }
        dp[i] += mn;
    }

    cout << dp[n-1] << endl;

    return 0;
}






