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
    vector<int> pos(n);
    set<int> open;
    for(int i=0;i<n;i++){
        int xi;
        cin >> xi;
        xi--;
        pos[i] = xi;
    }
    int q;
    cin >> q;
    for(int i=0; i<=pos[n-1]+q;i++){
        if(!binary_search(pos.begin(), pos.end(), i)){
            open.insert(i);
        }
    }

    //cout << mx << endl;

    while(q--){
      int i;
      cin >> i;
      i--;
      int x = *open.lower_bound(pos[i]+1);
      cout << x + 1 << endl;
      open.erase(x);
      open.insert(pos[i]);
      pos[i] = x;

    }



    return 0;
}






