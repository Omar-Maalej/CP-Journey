#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<pair<int, int>> a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(make_pair(x,i));
    }
    sort(a.begin(),a.end());
    int i=0,j=n-1, sum,left=-1,right=-1;
    while(i<j){
        sum=a[i].first+a[j].first;
        if(sum>x)j--;
        else if(sum < x) i++;
        else {
            left=min(a[i].second, a[j].second)+1;
            right = max(a[i].second, a[j].second)+1;
            break;
        }
    }
    if(left == -1)cout << "IMPOSSIBLE" << endl;
    else cout << left << " " << right << endl;
    return 0;
}
