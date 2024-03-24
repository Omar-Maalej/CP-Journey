#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        string m = "map", p ="pie";
        for(int i=0;i<n-2;i++){
            bool ok = true;
            for(int j=0;j<3;j++){
                if(s[i+j]!=m[j]){
                    ok = false;
                    break;
            }
            }
            if(ok){
                    cout << i << " ";
                    ans++;
                    i+=2;
                    continue;
            }
            ok = true;
            for(int j=0;j<3;j++){
                if(s[i+j]!=p[j]){
                    ok = false;
                    break;
            }
            }
             if(ok){
                    cout << i << " ";
                    ans++;
                    i+=2;
                    continue;
            }


        }

        cout << ans << endl;
    }


    return 0;
}

