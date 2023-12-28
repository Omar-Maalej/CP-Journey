#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int cnt=0;
        bool zero = false;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                zero = true;
            }else if(a[i]<0){
                cnt++;
            }
        }
        if(zero){
            cout << 0 << endl;
        }else if(cnt%2){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
    }

    return 0;
}
