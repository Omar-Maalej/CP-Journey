#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int t, a;
    cin >> t;
    while(t--){
        int l=1, r=1000;
        while(l<r){
            int mid = (r+l)/2;
            cout << "? " << 1 << " " << mid << endl;
            cin >> a;
            if(a != mid)r = mid;
            else l = mid+1;
        }
        cout << "! " << l << endl;
    }


    return 0;
}






