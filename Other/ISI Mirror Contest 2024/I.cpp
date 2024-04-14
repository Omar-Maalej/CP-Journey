#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int cnt = __builtin_popcount(a[0]);
    for(int i=0;i<n-1;i++){
        int x =a[i+1] & (~a[i] &   (  (1<<(int)ceil(log2(a[i+1])))  - 1  ));
        cnt+= max(0, __builtin_popcount(x));
    }
    cout << cnt << endl;


    return 0;
}


