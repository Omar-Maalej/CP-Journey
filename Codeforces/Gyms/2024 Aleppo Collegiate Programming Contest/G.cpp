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
        vector<vector<pair<int, int>>> v(n);
        for(int i = 0; i < q; i++){
            int x, l, r;
            cin >> x >> l >> r;
            x--;
            v[x].push_back( { l, r } );
        }
        bool bigOk = true;

        for(int i = 0; i < n; i++){
            vector<int> b(1e3 + 5);
            vector<int> e(1e3 + 5);

            for(int j = 0; j < v[i].size(); j++){
                b[v[i][j].first]++;
                e[v[i][j].second]++;
            }

             for(int j = 0; j < 1e3+4; j++){
                    b[j+1] += b[j];
                    e[j+1] += e[j];
             }

             for(int j = 0; j < 6 ; j++){
                cout << b[j] << " ";
             }

             cout << endl;
            bool used = false, ok = true;
            for(int j = 0; j < 1e3+5; j++){
                int cur =  e[j] - b[j];
                if(cur == 1 ) continue;
                else if (cur == 2 ){
                 if(!used) used = true;
                 else {
                    ok = false;
                    break;
                 }
                }
                else {
                    ok = false;
                    break;
                }
            }
        if(!ok)
           {
                cout << i << endl;
                bigOk = false;
                break;
           }
        }

       if(bigOk)cout << "YES" << endl;
       else cout << "NO" << endl;
    }


    return 0;
}






