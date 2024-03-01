#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const long double _PI= 3.141592653589793238;
const int MxN = 1e6+1;


int main()
{
    fastIO;
    int coins[5];
    coins[0]=1;
    coins[1]=3;
    coins[2]=6;
    coins[3]=10;
    coins[4]=15;
    dp[0]=0;
    for(int i=1;i<MxN;i++){
        bool test = false;
        int val = INT_MAX;
        for(int j=0;j<5;j++){
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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }


    return 0;
}

