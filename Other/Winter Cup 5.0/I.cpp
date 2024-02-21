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
        string face;
        cin >> n >> face;
        string a[n];
        int Jaqen = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]=="Jaqen")Jaqen = i;
        }
        int ans = -1;
        for(int i=0;i<n;i++){
            if(face == a[(Jaqen+i)%n] || face == a[(Jaqen-i+n)%n]){
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}


