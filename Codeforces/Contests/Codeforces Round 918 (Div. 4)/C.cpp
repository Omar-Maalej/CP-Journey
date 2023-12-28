#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long sum=0;
        for(int i=0;i<n;i++){
            long long a;
            cin >> a;
            sum+=a;
        }
        long long x = floor(sqrt(sum));
        if(x*x==sum)cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}
