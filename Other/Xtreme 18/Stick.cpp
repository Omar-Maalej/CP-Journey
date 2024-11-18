#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

int size_of_square(int b1, int b2) {
    int seg = abs(b2-b1);
    return seg * seg;
}

int32_t main() {

    fastIO;

    int n , k , l;
    cin >> n >> k >> l ;
    int ax1 =  0 * k - l , ay1 = 0 * k + l  ;
    int ax2 = 1 * k - l, ay2 = 1 *k + l;
    int BigSquare  = size_of_square(ax1 , ay1);
    int smallSquare = size_of_square(ax2 , ay1);
    int res;
    if(n > 1 && ax2 < ay1){
      res = (n-1)*(BigSquare - smallSquare) + BigSquare;
    }else {
        res = BigSquare * n;
    }
    cout << res << '\n';
}


