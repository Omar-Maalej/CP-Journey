#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        map<int, int> mp;

        for(int i=0;i<n;i++){
            mp[(i+1)*(n-i-1)] += a[i+1] - a[i] - 1;
        }

        for(int i=0;i<n;i++){
            mp[i * (n-i-1) + n - 1]++;
        }

        while(q--){
            int k;
            cin >> k;
            cout << mp[k] << " ";
        }
        cout << endl;
    }


    return 0;
}






