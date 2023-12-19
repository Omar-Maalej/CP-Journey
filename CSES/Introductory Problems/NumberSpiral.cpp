#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long y,x;
        cin >> y >> x;
        long long m = max(x,y);
        if(m%2==0){
            if(m==y){
                cout << m*m-(x-1) << endl;
            }else{
                cout << m*m -(x-1)-(m-y) << endl;
            }
        }else{
            if(x==m){
                cout << m*m - (y-1) << endl;
            }else{
                cout << m*m - (y-1) -(m-x) << endl;

            }
        }
    }

    return 0;
}
