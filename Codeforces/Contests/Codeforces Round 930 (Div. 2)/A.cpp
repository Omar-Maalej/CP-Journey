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
        long long n;
        cin >> n;
        cout << setprecision(10) << pow(2, floor(log2(n))) << endl;
    }

    return 0;
}

