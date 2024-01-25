#include <bits/stdc++.h>
using namespace std;

const int MxN=1e6+1;
int dp[MxN];

int maxDigit(int n){
    int res = 0;
    while(n>0){
        res = max(res, n%10);
        n/=10;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int d = maxDigit(i);
        dp[i]= 1 + dp[i-d];
    }

    cout << dp[n] << endl;
    return 0;
}
