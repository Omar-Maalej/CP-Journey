#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int pref[n+1];
    pref[0]=0;
    for(int i=1;i<=n;i++){
        pref[i]=pref[i-1]+a[i-1];
    }
    int q;
    cin >> q;
    while(q--){
        int x, y, m;
        cin >> x >> y >> m;
        cout << min(max(pref[n],x), pref[m]+y) << endl;
    }

    return 0;
}


