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
       if(n<=4)cout << -1 << endl;
       else {
            vector<int> a(n+5, 0);
            a[n/2] = 5;
            a[n/2 - 1] = 4;
            a[n/2 - 2] = 2;
            a[n/2 + 1] = 1;
            a[n/2 + 2] = 3;
            int l = n/2 - 3, r = n/2 + 3;
            for(int i=6;i<=n;i++){
                if(i%2 == 0){
                    a[l] = i;
                    l--;
                }else {
                    a[r] = i;
                    r++;
                }
            }
            for(int i=0;i<a.size();i++){
                if(a[i]!=0)cout << a[i] << " ";
            }
            cout << endl;
       }
    }


    return 0;
}







