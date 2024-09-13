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
        string s;
        cin >> s;
        int r = sqrt(n);
        if(sqrt(n) != r)
            cout << "NO" << endl;
        else {
            int k = 0;
            bool test = true;
            for(int i=0;i<r;i++){
                for(int j=0;j<r;j++){
                    if(i == 0 || i == r-1 || j == 0 || j == r-1 )
                        test&= s[k] == '1';
                    else
                        test &= s[k] == '0';
                    k++;
                }

            }
            if(test)cout << "YES" << endl;
            else cout << "NO" << endl;

        }

    }


    return 0;
}






