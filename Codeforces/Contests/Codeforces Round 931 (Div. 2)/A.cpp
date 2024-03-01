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
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
       cout << setprecision(10) << abs(a[0]-a[n-1]) + abs(a[n-1]- a[1]) + abs(a[1]-a[n-2]) + abs(a[n-2]-a[0]) << endl;
    }


    return 0;
}

