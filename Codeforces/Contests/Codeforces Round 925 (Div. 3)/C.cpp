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
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int left = 0, right = n-1;
        bool test = false;
        while(right > left){
            if(a[left]==a[right]){
                left++;
                right--;
            }else {
                test = true;
                break;
            }
        }
        if(test)cout << right - left + 1 << endl;
        else cout << 0 << endl;
    }
    return 0;

}

