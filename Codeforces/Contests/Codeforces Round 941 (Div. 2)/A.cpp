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
        int n,k;
        cin >> n >> k;
        map<int , int> m;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            m[x]++;
        }
        bool ok = false;
        for(auto x : m){
            if(x.second >= k){
                ok = true;
                break;
            }
        }
        if(ok) cout << k-1 << endl;
        else cout << n << endl;

    }


    return 0;
}
