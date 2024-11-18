#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int N;
    cin >> N;

    if(N == 1)cout << 0 << endl;
    else {
        int x = 0;
        while(N>1){
           // cout << N << " " << x << endl;
            if(N%3 == 0)N /= 3;
            else break;
            x++;
        }
        if(N == 1) cout << x << endl;
        else cout << -1 << endl;

    }


    return 0;
}






