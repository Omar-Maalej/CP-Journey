#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

const int MxN = 2*1e5+1;

int main()
{
    fastIO;
    int dp[MxN];
    dp[0]=0;
    for(int i=1;i<MxN;i++){
        int x = i;
        dp[i]=dp[i-1];
        while(x!=0){
            dp[i]+= x%10;
            x/=10;
        }
    }

    int t;
    cin >> t;
    while(t--)
    {
     int n;
     cin >> n;
     cout << dp[n] << endl;

    }
    return 0;


}

