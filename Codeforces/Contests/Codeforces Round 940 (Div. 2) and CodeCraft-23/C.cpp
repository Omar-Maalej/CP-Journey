#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
const int N = 3*1e5 + 1;
int dp[N];
const int m = 1e9+7;
const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    dp[0]=1;
    dp[1]=1;
    dp[2]=3;
    dp[3]=7;
    for(int i=4;i<N;i++){
        dp[i] = dp[i-1] % m+(((i-1)*dp[i-2])%m*2)%m;
        dp[i] = (dp[i]+m)%m;
    }
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        for(int i=0;i<k;i++){
            int r, c;
            cin >> r >> c;
            if(r==c)cnt++;
        }
        cout << (dp[(n-cnt-(k-cnt)*2)] + m) % m << endl;
    }

    return 0;
}

