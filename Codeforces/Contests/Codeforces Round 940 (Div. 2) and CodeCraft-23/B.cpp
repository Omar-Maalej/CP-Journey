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
        int n, k;
        cin >> n >>k;
        vector<int> b;
        int x = k;
        while(k){
            b.push_back(k%2);
            k/=2;
        }
        int ind = 0;
        for(int i=b.size()-1;i>0;i--){
            if(b[i]==1 && b[i-1]==0){
                ind = i;
                break;
            }
        }
        if(n==1)cout << x << endl;
        else {
                cout << (1 << ind) - 1 << " " << x - ((1 << ind) - 1)<< " " ;
                for(int i=0;i<n-2;i++){
                    cout << 0 << " ";
                }
                cout << endl;
        }

    }

    return 0;
}

