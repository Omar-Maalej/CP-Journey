#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        map<int , int> mp;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            mp[x]=1;
        }
        for(int i=0;i<m;i++){
            int x; cin >> x;
            if(mp[x]==1 || mp[x]==3){
                mp[x]=3;
            }else mp[x]=2;
        }
        bool test = true;
        int cnta = 0, cntb = 0, cntab = 0;
        for(int i=1;i<=k;i++){
            if(mp.count(i)==0){
                test = false;
                break;
            }else if(mp[i]==1)cnta++;
            else if(mp[i]==2)cntb++;
            else if(mp[i]==3)cntab++;
        }
        if(!test)cout << "NO" << endl;
        else {
            if(cnta <= (k/2) && cntb<= (k/2))cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}

