#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, bool>> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,true));
        v.push_back(make_pair(b,false));
    }
    sort(v.begin(), v.end());
    int res = 0, cnt = 0;
    for(int i=0;i<2*n;i++){
        if(v[i].second)cnt++;
        else cnt--;
        res = max(res, cnt);
    }
    cout << res << endl;
    return 0;
}
