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
        int a,b,c,d;
        cin >> a >> b >> c >> d;
         if ((a>min(c,d)) && (a <max(c,d))) {
            if ((b>min(c,d)) && (b <max(c,d))) cout << "NO" << endl;
            else cout <<   "YES" << endl;
            }
        else {
            if ((b>min(c,d)) && (b <max(c,d))) cout << "YES" << endl;
            else cout <<   "NO" << endl;
    }
    }


    return 0;
}


