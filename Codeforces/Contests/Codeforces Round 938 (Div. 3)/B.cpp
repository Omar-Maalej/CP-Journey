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
        int n,c,d;
        cin >> n >> c >> d;
        map<int, int> m;
        int a1 = INT_MAX;
        for(int i=0;i<n*n;i++){
            int x;
            cin >> x;
            m[x]++;
            a1 = min(a1,x);
        }
        bool ok = true;
        for(int i=0;i<n;i++){
            int x = a1;
            for(int j=0;j<n;j++){
                if(m[x])m[x]--;
                else {
                    ok = false;
                    break;
                }
            x+=c;
            }
        a1+= d;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;

    }


    return 0;
}


