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
        long long n, a, b, k;
        cin >> n >> a >> b >> k;
        if(n > k*b || n< k*a)
            cout << "NO" << endl;
        else cout << "YES" << endl;
    }


    return 0;
}

