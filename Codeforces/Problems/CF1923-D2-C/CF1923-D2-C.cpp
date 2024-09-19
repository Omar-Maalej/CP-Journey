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
        int n,q;
        cin >> n >> q;
        int c[n], cnt1[n+1],pref[n+1];
        cnt1[0] = 0;
        for(int i=0;i<n;i++){
            cin >> c[i];
            cnt1[i+1] = cnt1[i] + (c[i] == 1);
            pref[i+1] = pref[i] + c[i];
        }
        while(q--){
            int l,r;
            cin >> l >> r;
            if(l==r)cout << "NO" << endl;
            else {
            l--;
            int curSum = pref[r] - pref[l];
            int curCnt = cnt1[r] - cnt1[l];
            //cout << curSum << " " << curCnt <<endl;
            if(r-l+curCnt <= curSum)
                cout << "YES" << endl;
            else cout << "NO" << endl;
            }

        }
    }

    return 0;
}






