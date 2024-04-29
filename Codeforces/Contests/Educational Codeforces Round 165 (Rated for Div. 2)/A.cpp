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
        map<int, int> m;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            m[i+1] = x;
        }
        bool ok = false;
        for(auto x : m){
            if(x.first == m[x.second]){
                ok = true;
                break;
            }
        }
        if(ok)cout << 2 << endl;
        else cout << 3 << endl;
    }


    return 0;
}

