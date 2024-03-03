#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;



int main()
{
    fastIO;
    long long n, sum=0, i ,x;
    cin >> n;
    for(i=1;i<n;i+=2){
        cout << "? " << i << " " << i+1 << endl;
        cin >> x;
        sum+= x;
    }
    i-=2;
    if(n%2==1){
        cout << "? " << i+1 << " " << i+2 << endl;
        long long a1;
        cin >> a1;
        cout << "? " << i << " " << i+2 << endl;
        long long a2;
        cin >> a2;
        sum+= (a2+a1-x)/2;

    }
    cout << "! " << sum << endl;


    return 0;
}


