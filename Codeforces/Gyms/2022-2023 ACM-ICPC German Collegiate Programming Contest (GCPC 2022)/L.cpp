#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int l, w , n;
    cin >> l >> w >> n;
    if( (l * w) % n != 0 ){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    int k = (l*w)/n;
    int li, wi;
    for(int i=1;i*i<=k;i++){
        if(k%i == 0){
            if( (l % i == 0) && (w % (k/i) == 0) ){
                li = i;
                wi = k/i;
                break;
            }else if((l % (k/i) == 0) && (w % (i) == 0) ){
                wi = i;
                li = k/i;
                break;
            }

        }
    }

    //cout << wi << " " << li << endl;
    char c = 'A';
    int inc = 0;
    vector<vector<char>> ans(l, vector<char>(w));
    int cnt = 0;
    for(int j=0;j<l;j++){
        for(int k = 0;k<w;k++){
                ans[j][k] = 'A' + j/li *(w/wi) + k/wi;
            }
        }

    for(int i = 0;i<l;i++){
        for(int j = 0;j<w;j++){
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}






