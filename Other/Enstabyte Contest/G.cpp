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
        double c,h,t;
        cin >> h >> c >> t;
        int x = ceil( 1 / (1- (h-t)/(t-c) ) );
        if(h+c >= 2*t) cout << 2 << endl;
        else {
        double big, lit;
        lit = (h*x + c*(x-1))/(2*x -1) ;
        big =  (h*(x-1) + c*(x-2))/(2*x -3);
        if(abs(big - t) <= abs(t- lit)) cout << (2*x -3);
        else cout << (2*x -1) << endl;
    }
    }

    return 0;
}

