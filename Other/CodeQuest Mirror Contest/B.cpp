#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      string s;
      cin >> s;
      int res = 0;
      int cnt = 0;
      char c;
      for(int i=0;i<n;i++){
        c = s[i];
        if(c=='|'){
            cnt = 0;
        }else if(c=='#'){
            cnt++;
        }else{
            res = max(res, cnt);
        }
      }
        cnt = 0;
        for(int i=n-1;i>=0;i--){
        c = s[i];
        if(c=='|'){
            cnt = 0;
        }else if(c=='#'){
            cnt++;
        }else{
            res = max(res, cnt);
        }
      }

      cout << res << endl;
    }

    return 0;
}
