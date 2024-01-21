#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    long long res=x[0], sum=0;
    for(int i=0;i<n;i++){
        sum+=x[i];
        res=max(res,sum);
        if(sum<0)sum = 0;
    }

    cout << res << endl;

    return 0;
}
