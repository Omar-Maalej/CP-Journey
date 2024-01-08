#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;


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
        for(int i=0;i<n;i++){
            if(s[i]=='-')cnt++;
            else cnt--;
        }
        cout << abs(cnt) << endl;
    }

    return 0;
}

