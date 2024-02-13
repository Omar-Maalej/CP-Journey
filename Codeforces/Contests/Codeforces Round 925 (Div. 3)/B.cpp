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
        long long a[n], s = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            s+= a[i];
        }
        long long value = s/n, excess = 0;
        bool test = true;
        for(int i=0;i<n;i++){
            if(a[i]+excess < value){
                test = false;
                break;
            }else {
                excess+= a[i] - value;
            }
        }
        if(test)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;

}
