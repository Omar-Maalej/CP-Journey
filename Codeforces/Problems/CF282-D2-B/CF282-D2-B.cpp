#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int n;
    cin >> n;
    int a[n], g[n];
    for(int i=0;i<n;i++){
        cin >> a[i] >> g[i];
    }

    int diff = 0;
    for(int i=0;i<n;i++){
        if(diff+a[i]>=500){cout << "G";
        diff -= g[i];
        }else {
            cout << "A";
            diff += a[i];
        }
    }


    return 0;
}

