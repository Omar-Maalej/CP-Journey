#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    multiset<int, greater<int>> h;
    vector<int> t;
    for(int i=0;i<n;i++){
        int e;
        cin >> e;
        h.insert(e);
    }
    for(int i=0;i<m;i++){
        int e;
        cin >> e;
        t.push_back(e);
        }
    for(int i=0;i<m;i++){
        auto x = h.lower_bound(t[i]);
        if(x!=h.end()){
            cout << *x << endl;
            h.erase(h.find(*x));
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}
