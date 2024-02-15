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
        long double n,k;
        cin >> n >> k;
        if(k<= 4*n-4)cout << (long long)ceil(k/2) << endl;
        else if(k==4*n-3) cout << (long long)ceil((k-1)/2) + 1 << endl;
        else if(k==4*n-2) cout << (long long)ceil((k-2)/2) + 2 << endl;
    }

    return 0;
}

