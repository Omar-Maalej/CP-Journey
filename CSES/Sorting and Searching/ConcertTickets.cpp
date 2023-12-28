#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> h(n,0);
    vector<int> t(m,0);
    for(int i=0;i<n;i++){
        cin >> h[i];
        }
    for(int i=0;i<m;i++){
        cin >> t[i];
    }
    sort(h.begin(), h.end());
    for(int i=0;i<m;i++){
        int j=0;
        cout << t[i] << " : " << endl;
        while(j<n && h[j]<=t[i] && h[j]!=-1){
                cout << h[j] << endl;
                j++;
        }
        cout << h[j-1] << endl;
        h[j-1]=-1;
    }
    return 0;
}
