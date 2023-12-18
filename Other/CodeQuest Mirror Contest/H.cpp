#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int n,m;
    cin >> n >> m;
    string a[m];
    for(int i=0;i<m;i++){
        cin >> a[i];
    }

    float k=1;
    while(n>m){
        n-=m;
        m*=2;
        k*=2;
    }
    int j = ceil(n/k);
    cout << a[j-1] << endl;


    return 0;
}
