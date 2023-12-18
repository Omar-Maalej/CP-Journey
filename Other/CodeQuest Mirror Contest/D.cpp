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
        int x,y,k;
        cin >> x >> y >>k;
        cout << ceil((float)(k+y-1)/x)<< endl;
    }

    return 0;
}
