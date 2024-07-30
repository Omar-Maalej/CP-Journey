#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int counter = 0;
        string s;
        cin >> s;
        int ans = 0;
        stack<int> st;
        for(int i=0;i<n;i++){
            //cout << s[i] << " " << counter << " "  << " " << ans << " ";
            //if(!st.empty()) cout << st.top();
            //cout << endl;
            if(s[i]=='('){
                counter++;
                st.push(i);
            }else if(s[i]==')'){
                int l = st.top();
                st.pop();
                counter--;
                ans+= i-l;
            }
            else{
                if(counter==0){
                    counter++;
                    st.push(i);
                }else{
                int l = st.top();
                st.pop();
                counter--;
                ans+= i-l;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}





