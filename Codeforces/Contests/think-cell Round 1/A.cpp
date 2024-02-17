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
        int a[2*n], sum = 0;
        for(int i=0; i<2*n; i++){
            cin >> a[i];
        }
        sort(a,a+2*n);
        for(int i=0;i<2*n;i+=2){
                sum+=a[i];
        }
        cout << sum << endl;
    }
    return 0;
}
