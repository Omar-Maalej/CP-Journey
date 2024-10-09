#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    char cur = 'L';
    for(int i=0;i<n;i++){
        if(cur != s[i]){
            k--;
        }
        if(s[i] == 'L')cur = 'R';
        else cur = 'L';
    }

    cout << max(0ll, k) << endl;
    return 0;
}






