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
        int n;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long res = a[0];
        for(int i=1;i<n;i++){
            res = (res/a[i] + 1 ) * a[i];
        }
        cout << res << endl;

    }


    return 0;
}

