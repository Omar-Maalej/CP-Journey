#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


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
        set<char> letters;
        for(int i=0;i<n;i++){
            letters.insert(s[i]);
        }
        string r;
        for(char c: letters){
            r+=c;
        }
        map<char, char> m;
        for(int i=0;i<r.size()/2;i++){
            m[r[i]]= r[r.size()-i-1];
            m[r[r.size()-i-1]]= r[i];
        }
        if(r.size()%2)m[r[r.size()/2]] = r[r.size()/2];
        for(int i=0;i<n;i++){
            s[i] = m[s[i]];
        }
        cout << s << endl;
    }

    return 0;
}

