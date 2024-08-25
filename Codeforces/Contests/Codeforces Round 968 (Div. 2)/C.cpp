#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> occ;
        for(int i=0;i<n;i++){
            occ[s[i]]++;
        }
        string ans = "";
        while(n>0){
        //cout << n << endl;
          for(auto e : occ){
            if(e.second!=0){
                    ans+= e.first;
                    occ[e.first]--;
                    n--;
            }
          }
        }
        //cout << n << endl;
        cout << ans << endl;
    }


    return 0;
}






