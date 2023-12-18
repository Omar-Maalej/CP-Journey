#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int n,l;
    cin >> n >>l;
    double a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    double d;
    if(a[0]==0)d=a[1]/2;
    else d=a[0];
    for(int i=0;i<n-1;i++){
        d = max((a[i+1]-a[i])/2, d);
    }

    d = max(d,(l-a[n-1]));

     cout << fixed << setprecision(10) << d << endl;


    return 0;
}
