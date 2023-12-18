#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long p[n];
    long long sum = 0;
    for(int i=0;i<n;i++){
        cin >> p[i];
        sum+= p[i];
    }
    long long ans = sum;
    for(int b=0;b<(1<<n);b++){
        //cout <<"- "<< b << " : " << endl;
        long long subsum=0;
        for(int i=0;i<n;i++){
            if(b&(1<<i)){
                //cout << p[i] << endl;
                subsum+=p[i];
            }
        }
         //cout << "subsum = " << subsum << endl;
            ans =  min(ans,abs(sum-2*subsum));
    }
    cout << ans << endl;

    return 0;
}
