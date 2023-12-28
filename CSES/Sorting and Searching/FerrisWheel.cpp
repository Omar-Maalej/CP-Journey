#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> p;
    for(int i=0;i<n;i++){
        int pi;
        cin >> pi;
        p.push_back(pi);
    }
    sort(p.begin(),p.end());
    int l = 0, r = n-1, ans=0;
    while(r>=l){
        if(p[r]+p[l]<=x){
            l++;
            r--;
            ans++;

        }else{
           r--;
           ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
