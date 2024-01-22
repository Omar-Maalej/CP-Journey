#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end(), [](auto &left, auto &right) {
    return left.second < right.second;
    });

    int res = 1;
    int j=0;
    for(int i=1;i<n;i++){
        if(v[j].second<=v[i].first){res++;
        j=i;
        }
    }
    cout << res << endl;
    return 0;
}
