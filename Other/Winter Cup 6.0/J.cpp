#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum=0;
        for(int i=0;i<n;i++){
            long long x;
            cin >> x;
            sum+= pow(2, x);
        }
        cout << sum << endl;
    }


    return 0;
}



