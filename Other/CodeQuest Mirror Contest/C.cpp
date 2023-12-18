#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

void solve(){
        ll n;
        cin >> n;
        if(n%11==0){
                cout << "YES" << endl;
                return;
        }

        while(n>=111){
            n-=111;
            if(n%11==0){
                    cout << "YES" << endl;
                    return;}
        }
        if(n%11==0){
                    cout << "YES" << endl;
                    return;}
        if(n%111==0)cout << "YES" << endl;
        else cout << "NO" << endl;
}


int main()
{
    fastIO;
    ll t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

