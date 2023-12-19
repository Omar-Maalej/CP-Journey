#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    for(long long i=1;i<=n;i++){
        long long z = i*i;
        cout << z*(z-1)/2 - (i-1)*(i-2)*4 << endl;
    }


    return 0;
}
