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
        vector<int> a(n,0), b(n,0);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        if(a == b) {
                cout << "Bob" << endl;
                continue;
        }
        reverse(b.begin(), b.end());
        if(a == b){
            cout << "Bob" << endl;
            continue;
        }
        cout << "Alice" << endl;
    }


    return 0;
}






