#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int n,q;
const int MxN = 2e5+5;
int a[MxN];
int pref[MxN];

int query(int index){
    int x = index/n;
    int rm = index%n;
    int res = x * pref[n];
    if(rm > 0 ){
        if(rm + x <= n)
            res += pref[rm + x] - pref[x];
        else res += pref[(rm + x)%n ] + pref[n] - pref[x];
    }
    return res;

}

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        cin >> n >> q;
        pref[0] = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            pref[i+1] = pref[i] + a[i];
        }

        while(q--){
            int l,r;
            cin >> l >> r;
            l--;
            cout << query(r) - query(l) << endl;
        }
    }

    return 0;
}





