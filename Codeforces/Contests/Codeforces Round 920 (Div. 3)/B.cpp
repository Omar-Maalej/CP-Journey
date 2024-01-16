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
       string s,f;
       cin >> s >> f;
       int cnt0=0,cnt1=0, res = 0;
       for(int i=0;i<n;i++){
        if(s[i]!=f[i]){
            if(s[i]=='0'){
                    if(cnt1)cnt1--;
                    else {cnt0++;
                    res++;
                    }
            }
            else{
                if(cnt0)cnt0--;
                    else {cnt1++;
                    res++;
                    }
            }
        }
       }
       cout << res << endl;
    }


    return 0;
}

