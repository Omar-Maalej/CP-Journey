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
        bool ok = true;
        for(int i=0;i<n-2;i++){
            a[i+1]-=2*a[i];
            a[i+2]-=a[i];
            a[i]=0;
            if(a[i+1]<0 || a[i+2]<0)ok = false;
        }
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                ok = false;
                break;
            }
        }
        if(ok)cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}


