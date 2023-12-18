#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        char l = s[0];
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                 cnt++;
            }else if(cnt){
                cnt--;
            }
        }
        cout << cnt + n%2<< endl;

    }
    return 0;
}
