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
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<int> p;
        if(a[0]==1){
                p.push_back(0);
        }
        else p.push_back(-a[0]);
        bool found[n];
        for(int i=0;i<n;i++){
            found[i] = false;
        }

        for(int i=1;i<n-1;i++){
            if(a[i]>0){
                    for(int j=0;j<n;j++){
                        if(found[j]){m=j;
                        break;}
                    }
                    p.push_back(m);
                    found[m]=true;
            }
            else p.push_back(-a[i]+m);
        }
        if(n!=1){
            p.push_back(n-a[n-1]);
        }

        for(int i=0;i<n;i++){
            cout << p[i] << " ";
        }
        cout << endl;
    }

    return 0;
}


