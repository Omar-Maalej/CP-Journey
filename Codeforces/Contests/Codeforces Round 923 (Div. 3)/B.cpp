#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int occ[27];
        memset(occ, 0 ,sizeof(occ));
        string res = "";
        for(int i=0;i<n;i++){
            int x; cin >> x;
            for(int j=0;j<=26;j++){
                if(occ[j]==x){
                    res+= char(97+j);
                    occ[j]++;
                    break;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}

