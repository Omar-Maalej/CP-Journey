#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int



int32_t main() {

    fastIO;
    int n,q;
    cin >> n >> q;
    int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
        p[i]--;
    }
    vector<int> a(n,0);
    while(q--){
        int ti;
        cin >> ti;
        if(ti == 0){
            int l,r,c;
            cin >> l >> r >> c;
            for(int i=l-1;i<r;i++){
                a[i] += c;
            }
        }else if(ti == 1){
            int l,r,c;
            cin >> l >> r >> c;
            for(int i=l-1;i<r;i++){
                a[p[i]] += c;
            }
        }else if(ti == 2){
                int l,r;
                cin >> l >> r;
                int sum = 0;
                for(int i=l-1;i<r;i++){
                 sum+= a[i];
                }
                cout << sum << endl;
        }else {
                int l,r;
                cin >> l >> r;
                int sum = 0;
                for(int i=l-1;i<r;i++){
                 sum+= a[p[i]];
                }
                cout << sum << endl;
        }


    }
    return 0;
}



