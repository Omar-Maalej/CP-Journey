#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
       int a,b,l;
       cin >> a >> b >> l;
       int x =l;
       int cnta=0, cntb=0;
       while(l%a==0){
        l/=a;
        cnta++;
       }
       while(x%b==0){
        x/=b;
        cntb++;
       }
       cout << cnta + cntb  << endl;
    }

    return 0;
}


