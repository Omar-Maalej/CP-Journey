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
        int n ,k;
        cin >> n >> k;
        if(k>=n-1)cout << 1 << endl;
        else cout << n << endl;
    }


    return 0;
}

