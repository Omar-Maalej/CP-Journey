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
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = 0; j < 8; j++){
                int mark;
                cin >> mark;
                sum += mark;
            }
            cout << sum << endl;
        }

    }


    return 0;
}






