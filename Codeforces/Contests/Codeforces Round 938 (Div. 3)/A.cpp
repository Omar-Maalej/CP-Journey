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
        int n,a,b;
        cin >> n >> a >> b;
        if(2*a>b) cout << (n/2)*b + (n%2) *a << endl;
        else
            cout << n *a << endl;
    }


    return 0;
}

