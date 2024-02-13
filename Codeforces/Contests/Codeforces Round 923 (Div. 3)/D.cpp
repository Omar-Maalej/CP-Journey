#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], pref[n+1];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        pref[0] = 0;
        for(int i=1;i<n;i++){
            pref[i] = pref[i-1]+a[i];
        }
        int q;
        cin >> q;
        for(int i=0;i<q;i++){
            int l, r;
            cin >> l >> r;
            if(prefSum[r-1]-prefSum[l-1] == (l-r)*a[l-1]) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}
