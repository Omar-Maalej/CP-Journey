#include <bits/stdc++.h>
using namespace std;

const int MxN = 1e6+1;
int dp[MxN];

int main(){
    int n,x;
    cin >> n >> x;
    //memset(dp,0,sizeof(dp));
    int coins[n];
    for(int i=0;i<n;i++){
        cin >> coins[i];
    }
    dp[0]=0;
    for(int i=1;i<=x;i++){
        bool test = false;
        int val = INT_MAX;
        for(int j=0;j<n;j++){
            if(i-coins[j]>=0){
                if(dp[i-coins[j]]!=-1)
                    {
                        test = true;
                        val = min(val, 1+dp[i-coins[j]]);
                    }
            }
        }
        if(test)dp[i]=val;
        else dp[i]=-1;
    }
    cout << dp[x] << endl;
    return 0;
}
