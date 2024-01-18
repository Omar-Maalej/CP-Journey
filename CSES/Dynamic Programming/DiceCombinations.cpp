#include <bits/stdc++.h>
using namespace std;
const int MxN = 1e6+1;
int dp[MxN];

int main(){
    int mod = 1e9 + 7;
    int n;
    cin >> n;
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<=n;i++){
      int j=1;
      while(j <= 6 && i-j >= 0) {
        dp[i] = (dp[i]+dp[i-j]) % mod;
        j++;
    }
    }

    cout << dp[n] << endl;

    return 0;
}
