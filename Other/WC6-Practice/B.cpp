#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

bool prime(long long n) {
    if (n < 2) return false;
    for (long long x = 2; x*x <= n; x++) {
    if (n%x == 0) return false;
    }
return true;
}


int main()
{
    fastIO;
    long long k;
    cin >> k;
    k++;
    while(!prime(k))k++;
    cout << k << endl;






    return 0;
}


