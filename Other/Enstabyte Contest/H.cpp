#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int n;
    cin >> n;
    int s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        int underDog = INT_MAX;
        for(int i=l-1;i<r;i++){
            underDog=min(underDog,s[i]);
        }
        bool test = true;
        int res = r-l+1;
        for(int i=l-1;i<r;i++){
            if(s[i]%underDog!=0){
                    test=false;
                    break;
            }
            else {
                if(underDog==s[i])res--;
            }
        }
        if(test)cout << res << endl;
        else cout << r-l+1 << endl;
    }
    return 0;
}

