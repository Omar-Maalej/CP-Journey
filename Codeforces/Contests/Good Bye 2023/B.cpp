#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        if(a==1){
            cout << b*b << endl;
        }else if(__gcd(a,b)==a)
            cout << (b / a)*b << endl;
        else cout << (b/__gcd(a,b)*a) << endl;
        }


    return 0;
}


