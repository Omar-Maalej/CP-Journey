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
        int k;
        cin >> k;
        unordered_map<int, int> mp;
        int n,m;
        for(int i=0;i<k;i++){
            int a;
            cin >> a;
            if(mp[(k-2)/a] && ( (a * ((k-2)/a) == k-2))){
                n = a;
                m = (k-2)/a;
            }
            mp[a]++;
        }
        cout << n << " " << m << endl;
    }


    return 0;
}






