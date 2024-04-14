#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    long u,v, M;
    cin >> u >> v >> M;

    long long x = u, y = v;
    set<int> S;
    vector<int> ord(M+1, 0);
    for(int i=0;i<M;i++){
        long long p = (x+y)%M;
        cout << p << endl;
        S.insert(p);
        if(!ord[p])ord[p] = i+1;
        x = (u * p)%M;
        y= (v*p)%M;
    }
    for(int i=0;i<M;i++){
        if(ord[i]!=0)cout <<  ord[i] << " ";
        else cout << -1 << " ";
    }


    return 0;
}


