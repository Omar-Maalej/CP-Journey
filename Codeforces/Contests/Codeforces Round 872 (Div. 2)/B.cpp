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
        int n,m;
        cin >> n >> m;
        int b[n*m];
        for(int i = 0;i<n*m;i++){
            cin >> b[i];
        }

        sort(b, b+n*m);

        if(n<m)swap(n,m);
        cout << max( (b[n*m-1]-b[0]) * ((n-1)*m)+(b[n*m-2]-b[0]) * (m-1),(b[n*m-1]-b[0])*((n-1)*m)+(b[n*m-1]-b[1]) * (m-1)  ) << endl;

    }

    return 0;
}






