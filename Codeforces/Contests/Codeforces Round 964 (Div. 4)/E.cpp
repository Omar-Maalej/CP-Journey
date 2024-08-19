#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

const int MxN = 2 * 1e5 + 5;
int dp[MxN];

int32_t main()
{
    fastIO;
    dp[0] = 0;
    for(int i=1;i<MxN;i++){
        dp[i] = dp[i-1] + (log2(i)/log2(3)) + 1;
    }

    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        cout << dp[r] - dp[l] + 2 * (dp[l]- dp[l-1])<< endl;

    }


    return 0;
}






