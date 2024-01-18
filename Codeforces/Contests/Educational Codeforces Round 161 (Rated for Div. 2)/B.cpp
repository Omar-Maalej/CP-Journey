#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    //unsolved
    fastIO;
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       int a[n];
       for(int i=0;i<n;i++){
        cin >> a[i];
       }
       sort(a,a+n);
       int cnt=0;
       for(int i=0;i<n-2;i++){
            if(a[i+1]>=a[i+2])cnt+=n-2;
       }
       cout << cnt << endl;
    }


    return 0;
}


