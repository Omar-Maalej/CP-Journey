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
        string s;
        cin >> s;
        map<int, int> ind;
        for(int i=0;i<m;i++){
            int a;
            cin >> a;
            ind[a-1]++;
        }
        string c;
        cin >> c;
        sort(c.begin(),c.end());
        int k=0;
        for(int i=0;i<n;i++){
            if(ind[i]){
                s[i]=c[k];
                k++;
            }
        }
        cout << s << endl;
    }

    return 0;
}

