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
        string x, y;
        cin >> x >> y;
        int n=x.size();
        int i=0;
        while(x[i]==y[i] && i<n)i++;
        if(i>=n-1){
            cout << x << endl;
            cout << y << endl;
            continue;
        }
        if(x[i]>y[i]){
            for(int j=i+1;j<n;j++){
                if(x[j]>y[j])
                        swap(y[j],x[j]);
            }
        }else {
            for(int j=i+1;j<n;j++){
                if(x[j]<y[j])swap(x[j],y[j]);
            }
        }
        cout << x << endl;
        cout << y << endl;
    }


    return 0;
}

