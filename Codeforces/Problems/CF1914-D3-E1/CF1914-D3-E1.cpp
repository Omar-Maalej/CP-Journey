#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> v;
        int a[n], b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        for(int i=0;i<n;i++){
            cin >> b[i];
        }

        for(int i=0;i<n;i++){
            v.push_back({a[i],b[i]});
        }

        sort(v.begin(), v.end(), [&](auto a, auto b){
                    return a.first+a.second > b.first+b.second;
             });
        int Alice = 0, Bob = 0;
        bool turn = true;
         for(int i=0;i<n;i++){
            if(turn)Alice+= v[i].first -1;
            else Bob += v[i].second - 1;
            turn = !turn;
        }

        cout << Alice - Bob << endl;
    }


    return 0;
}






