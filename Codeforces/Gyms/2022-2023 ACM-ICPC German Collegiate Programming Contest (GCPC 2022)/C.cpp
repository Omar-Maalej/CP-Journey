#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

int32_t main()
{
    fastIO;
    int n, q;
    cin >> n >> q;
    set<int> s;

    while(q--){
        char c;
        cin >> c;
        if(c == '-'){
            int a;
            cin >> a;
            s.insert(a);
        }else if (c == '+'){
            int a;
            cin >> a;
            s.erase(a);
        }else {
            int a,b;
            cin >> a >> b;
            if(a>b)swap(a,b);
            auto it1 = s.lower_bound(a);
            //cout << "1" << *it1 << endl;
            bool t1 = false,t2 =  false;
            if(it1 != s.end()){
                if(*it1 < b)t1 = true;
                if(it1 != s.begin()){
                it1--;
                //cout << "2" << *it1 << endl;
                if(*it1 <= a)t2 = true;
                }else if (*it1 == a)t2 = true;
            }
            it1 = s.lower_bound(b);
            if(it1 != s.end()){
                //cout << *it1 << endl;
                t2 = true;
            }
            if(!t1 || !t2) cout << "possible"<<endl;
            else cout << "impossible" << endl;





            }


        }


    return 0;
}






