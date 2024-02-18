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
        long long a[n], p = 1;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if()
            p*=a[i] % m;
        }
        string s;
        cin >> s;
        int l = 0, r = n-1;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                cout << p % m << " ";
                p/=a[l];
                l++;
            }else {
                cout << p % m << " ";
                p/=a[r];
                r--;
            }
        }
        cout << endl;


    }


    return 0;
}
