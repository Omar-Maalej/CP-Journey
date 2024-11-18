#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int n;
    cin >> n;
    vector<pair<int, int>> temps(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        temps[i] = {a, b};
    }
    sort(temps.begin(), temps.end());
    int T1 = 105, T2 = 105;
    for(int i=-100;i<=100;i++){
        for(int j = i; j<=100;j++){
            bool ok = true, test1 = false;
            for(int k=0;k<n;k++){
                if(!test1){
                    if(temps[k].first <= i && temps[k].second >= i)continue;
                    else test1 = true;
                }
                if(test1 && temps[k].first <= j   && temps[k].second >= j)continue;
                else {ok = false;
                break;}

            }
            if(ok){
                //cout << i << " " << j << endl;
                T1 = min(T1, i);
                T2 = min(T2, j);
            }
        }

    }

    if(T1 == 105 && T2 == 105)cout << -1 << endl;
    else cout << T1 << " " << T2 << endl;

    return 0;
}





