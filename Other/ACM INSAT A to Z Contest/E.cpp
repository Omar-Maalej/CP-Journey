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
        ll n;
        double s;
        cin >> n >> s;
            if(n%2){
            cout << fixed << setprecision(0)<< floor( (s/(n-(n/2)))) << endl;
        }else{
            cout << fixed << setprecision(0)<< floor( (s) / (n-(n/2-1))) << endl;
        }



    }


    return 0;
}

