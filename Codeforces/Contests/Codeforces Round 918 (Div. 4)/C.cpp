#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        double sum=0;
        for(int i=0;i<n;i++){
            double a;
            cin >> a;
            sum+=a;
        }
        double x = floor(sqrt(sum));
        if(x*x==sum)cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}
