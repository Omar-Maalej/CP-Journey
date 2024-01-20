#include <bits/stdc++.h>
using namespace std;
const int MxN = 1e6+1;
const int mod = 1e9+7;

int dp[MxN]; // dp[x] = number of ways you can make x

int main(){
    int n, x;
    cin >> n >> x;
    int coins[n];
    for(int i=0;i<n;i++){
        cin >> coins[i];
    }
    memset(dp,0,sizeof(dp));
    dp[0]=1; // we initialise dp[0] to 1 so when we subtract and find 0 we add it to the number of ways
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i-coins[j]>=0){
                dp[i]= (dp[i]+dp[i-coins[j]]) % mod;
            }
        }
    }
    cout << dp[x] << endl;

    return 0;
}
