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
        long long a[n];
        long long maxA = INT_MIN, minA = INT_MAX;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]>maxA)maxA=a[i];
            if(a[i]<minA)minA=a[i];
        }
        cout << maxA-minA << endl;
    }

    return 0;
}

