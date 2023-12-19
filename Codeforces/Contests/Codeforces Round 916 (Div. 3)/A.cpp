#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for(char c='A'; c<='Z'; c++){
            int cnt = 0;
            for(int i=0;i<n;i++){
                if(s[i]==c)cnt++;
            }
            if(cnt>= (c-'A'+1))ans++;
        }
        cout << ans << endl;


    }
    return 0;
}
