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
        int n, m, k;
        cin >> n >> m >> k;
        int b[n], c[m];
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        for(int i=0;i<m;i++){
            cin >> c[i];
        }

        sort(b,b+n);
        sort(c,c+m);
        int ans = 0;
        int r = m-1, l = 0;
        while(l<n && r>=0){
            if(b[l]+c[r]<=k){
                ans+= r+1;
                l++;
            }
            else r--;
        }
        cout << ans << endl;
    }


    return 0;
}

