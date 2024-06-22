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
        int n,m;
        cin >> n >> m;
        char v[n][m];
        bool first = true;
        int jind, iind;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> v[i][j];
                if(v[i][j]=='#' && first){
                    first = false;
                    jind = j;
                    iind = i;
                }
            }
        }
        int i = iind;
        while(i<n && v[i][jind] == '#')i++;
        cout << iind + (i-iind)/2  + 1 << " " << jind + 1 << endl;

        }


    return 0;
}

