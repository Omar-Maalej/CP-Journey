#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long p[n];
    // i thought it was the average first but then I noticed it's the median through tests
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    sort(p,p+n);
    long long median=p[n/2+n%2-1], res = 0;
    for(int i=0;i<n;i++){
        res += abs(p[i]-median);
    }
    cout << res << endl;
    return 0;
}
