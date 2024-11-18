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
    int n;
    cin >> n;
    int h[n];
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    for(int i=2;i<n;i++){
        dp[i] += min(dp[i-1] + abs(h[i]-h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
    }

    cout << dp[n-1] << endl;

    return 0;
}






