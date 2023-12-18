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
    ll v[n], c[n];
    for(int i=0;i<n;i++){
        cin >> v[i];
        c[i]=v[i];
    }
    sort(c,c+n);

    ll pref1[n];
    ll pref2[n];
    pref1[0]=v[0];
    pref2[0]=c[0];

    for(int i=1;i<n;i++){
        pref1[i]=pref1[i-1] + v[i];
        pref2[i]=pref2[i-1] + c[i];
    }

    int m;
    cin >>m;

    for(int i=0;i<m;i++){
        int l,r,type;
        cin >> type >> l >> r;
        if(type==1){
            if(l==1)cout << pref1[r-1] << "\n";
            else cout << pref1[r-1] - pref1[l-2] << "\n";
        }else{
            if(l==1)cout << pref2[r-1] << "\n";
            else cout << pref2[r-1] - pref2[l-2]<< "\n";
        }
    }


    return 0;
}

