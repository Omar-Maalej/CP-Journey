#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        vector<pair<int, int>> v;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        for(int i=0;i<n;i++){
            v.push_back(make_pair(a[i],b[i]));
        }
        sort(v.begin(), v.end());
        for(int i=0;i<n;i++){
            cout << v[i].first << " ";
        }
        cout << endl;
        for(int i=0;i<n;i++){
            cout << v[i].second << " ";
        }
        cout << endl;

    }
    return 0;
}
