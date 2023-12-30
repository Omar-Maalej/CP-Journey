#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int b[n];
        int p = 1;
        for(int i=0;i<n;i++){
            cin >> b[i];
            p*=b[i];
        }
        if(2023%p==0){
                cout << "YES" << endl;
                cout << 2023/p << " ";
                for(int i=0;i<k-1;i++){
                    cout << 1 << " ";
                }
                cout << endl;
             }else cout << "NO" << endl;

        }


    return 0;
}

