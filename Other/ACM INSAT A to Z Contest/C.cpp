#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    //   This worked for both Hard and Easy version of the problems C and D
    fastIO;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    vector<int> b;
    for(int i=n/2;i<n-n%2;i++){
        b.push_back(a[i]);
        b.push_back(a[i-n/2]);
    }
    if(n%2)b.push_back(a[n-1]);

    int cnt = 0;
    for(int i=1;i<n-1;i++){
        if( (b[i]<b[i-1]) && (b[i]<b[i+1]) )cnt++;
    }
    cout << cnt << endl;
    for(int i=0;i<n;i++){
            cout << b[i] << " ";
    }

    return 0;


}
