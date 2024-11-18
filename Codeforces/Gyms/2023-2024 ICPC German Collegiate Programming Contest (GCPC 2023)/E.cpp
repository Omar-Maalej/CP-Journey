#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    //cout << 'A' - 'a' << endl;
    fastIO;
    string s;
    cin >> s;

    vector<string> ans;
    string init = "";
    init += s[0]+32;
    ans.push_back(init);
    for(int i=1;i<s.size();i++){
        vector<string> newStrings;
        for(int j = 0;j<ans.size();j++){
            //cout << ans[j] << endl;
            //cout << ans[j][ans[j].size()-2] << endl;
            if(s[i] != 'S')ans[j] += (s[i] + 32);
            else if(ans[j][ans[j].size()-1] != 's') ans[j] += 's';
            else {
                string x = ans[j];
                x+= 's';
                ans[j].pop_back();
                ans[j] += 'B';
                //cout << ans[j] << endl;
                //cout << x << endl;
                newStrings.push_back(x);
            }}
        for(int j=0;j<newStrings.size();j++){
            ans.push_back(newStrings[j]);
           // cout << newStrings[j] << endl;
        }

    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }


    return 0;
}






