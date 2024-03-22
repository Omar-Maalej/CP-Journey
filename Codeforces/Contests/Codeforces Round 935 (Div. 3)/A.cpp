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
        long long a,b,c;
        cin >> a >> b >> c;
        if((b%3==1 && c<=1) || (b%3==2 && c==0) ){
                cout << -1 << endl;
        }else {
                cout << setprecision(15) << a + ceil((float)(b+c)/3.0) << endl;
        }
    }

    return 0;
}

