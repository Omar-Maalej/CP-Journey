#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;
const long long MOD = 998244353;

long long BinCoef(int n, int k){
    if(k==0)return 1;
    if(n==k)return 1;
    return ((BinCoef(n-1, k-1)%MOD) + (BinCoef(n-1,k)%MOD)) % MOD;
}

int main()
{
    fastIO;
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << BinCoef(n,n/2) << endl;
    }


    return 0;
}




