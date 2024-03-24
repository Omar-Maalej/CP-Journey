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
        int n, m, x;
        cin >> n >> m >> x;
        set<int> s;
        s.insert((x-1+n)%n);
        for(int i=0;i<m;i++){
            int a;
            char c;
            cin >> a >> c;

            set<int> aux;
            for(auto j : s){
                 aux.insert(j);
            }
            for(auto j: aux)s.erase(j);
            for(auto j: aux){

                if(c=='0'){
                        s.insert((j+a)%n);
//                        cout << (j+a)%n << endl;
                 }else if(c=='1'){
                     s.insert((j-a+n)%n);
//                     cout << (j-a+n)%n << endl;
                 }
                 else {
                     s.insert((j-a+n)%n);
                     s.insert((j+a)%n);
//                      cout << (j+a)%n << endl;
//                      cout << (j-a+n)%n << endl;
              }
           }
        }
        cout << s.size() << endl;
        for(auto j : s)
                cout << j+1 << " ";
        cout << endl;

    }

    return 0;
}

