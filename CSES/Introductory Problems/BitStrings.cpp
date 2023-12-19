#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

int main(){
    int n;
    cin >> n;
    long long res = 1;
    for(int i=0;i<n;i++){
        res = (res*2)%mod;
    }
    cout << res << endl;
    return 0;
}
