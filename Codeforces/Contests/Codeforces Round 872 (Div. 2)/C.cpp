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
        int cnt1 = 0, cnt2 = 0;
        bool x[m];
        for(int i=0;i<n;i++){
            int xi;
            cin >> xi;
            if(xi == -1)cnt1++;
            else if(xi == -2)cnt2++;
            else x[xi] = true;
        }

        for(int i=0;i<m;i++){

        }

    }

    return 0;
}






