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
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        bool ok = false;
        int ind;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                    ok=true;
                    ind = i+1;
                    break;}
        }
        if(ok){
            string s = "";
            for(int i=0;i<n;i++){
                s+='R';
            }
            if(ind!=n-1)s[ind]='B';
            else s[ind-1]='B';
            cout << "YES" << endl;
            cout << s << endl;
        }else cout << "NO" << endl;

    }

    return 0;
}

