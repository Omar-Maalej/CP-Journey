#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int n,k;
    cin >> n >> k;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }

    set<int> s;
    for(int i=0;i<k;i++){
        s.insert(x[i]);
    }

    cout << *(s.begin() + k/2) << endl;

    return 0;
}





