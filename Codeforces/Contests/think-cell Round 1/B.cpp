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
        int n;
        cin >> n;
       for(int i=1;i<=(n/2);i++){
            cout << (n-i+1) <<" "<< i << " ";
       }
       if(n%2)cout << n/2 + 1 << endl;
       else cout << endl;
    }
    return 0;
}

