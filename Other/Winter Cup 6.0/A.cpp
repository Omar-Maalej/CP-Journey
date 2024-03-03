#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string res = "";
        bool last = false;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1')res+=s[i];
            else {
                int j=i;
                bool test = false;
                string sub = "";

                while(j<n-1){
                    if(s[j]==s[j+1]){
                        test = true;
                        if(j+1==n-1)last = true;
                        j++;
                        break;
                    }else{
                        sub+=s[j];
                    }
                    j++;
                }
                if(test)res+= '1';
                else res+= sub;

                i=j;
            }
        }
        if(!last)res+=s[n-1];
        cout <<res << endl;
    }


    return 0;
}




