#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int a[n], b[m];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int i=0, j=0, cnt=0;
    while(i<n && j<m){
        if(b[j]<=a[i]+k && b[j] >= a[i]-k){
            i++;
            j++;
            cnt++;
        }else if(b[j]<a[i]-k){
            j++;
        }else{
            i++;
        }
    }

    cout << cnt << endl;

    return 0;
}
