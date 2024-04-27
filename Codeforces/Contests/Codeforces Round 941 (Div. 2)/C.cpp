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
        set<long long> a;
        long long maxA =0;
        for(int i=0;i<n;i++){
            long long x ;
            cin >> x;
            a.insert(x);
            maxA = max(maxA, x);
        }
        long long cnt = 0, prev = 0;
        bool alice = true;
        for(auto x: a){
            if(x-cnt>1){
                break;
            }
            cnt+=(x-prev);
            prev = x;
            alice = !alice;
        }
        if(cnt == maxA)alice = !alice;
        if(alice)cout << "Alice" << endl;
        else cout << "Bob" << endl;

    }


    return 0;
}
