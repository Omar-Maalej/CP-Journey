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
        int n,k;
        cin >> n >> k;
        if(k == n){
            for(int i=0;i<n;i++){
                cout << 1 << " ";
            }
            cout << endl;
        }else if(k == 1){
            for(int i=1;i<=n;i++){
                cout << i << " ";
            }
            cout << endl;
        }else cout << -1 << endl;
    }

    return 0;
}

