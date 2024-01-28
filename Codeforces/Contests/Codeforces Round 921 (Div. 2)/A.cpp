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
        int n,k;
        cin >> n >> k;
        string s="";
        for(int i=0;i<n;i++){
            for(char c='a';c<'a'+k;c++){
                s+=c;
            }
        }
           cout << s << endl;
    }




    return 0;
}

