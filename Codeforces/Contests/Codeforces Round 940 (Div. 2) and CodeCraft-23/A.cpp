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
        map<int, int> occ;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            occ[x]++;
        }
        int ans = 0;
        for(auto i: occ){
            ans+= (i.second / 3);
        }
        cout << ans << endl;
    }

    return 0;
}

