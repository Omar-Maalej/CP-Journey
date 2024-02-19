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
        long long n, m;
        cin >> n >> m;
        long long a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        string s;
        cin >> s;
        long long l = 0, r = n, p = 1;
        for(int i=0;i<n;i++){
            if(s[i]=='L')l++;
            else r--;
        }
        int res[n];
        memset(res, 1, sizeof(res));
        for(int i=n-1;i>=0;i--){
            if(s[i]=='L'){
                p=( p*a[l-1] ) % m;
                res[i]=p%m;
                l--;
            }else {
                p=(p* a[r]) % m;
                res[i]=p%m;
                r++;
            }
        }
        for(int i=0;i<n;i++){
            cout << res[i] << " ";
        }
        cout << endl;


    }


    return 0;
}
