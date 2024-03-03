#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    long long n;
    cin >> n;
    long long x = 1, m = n;
    vector<long long> v1, v2;
    for(int i=2;i<=n;i++){
        cout << "? " << x << " " << i << endl;
        long long a;
        cin >> a;
        v1.push_back(a);
        m=min(m,a);
    }
    for(int i=0;i<v1.size();i++){
        if(v1[i]==m)v2.push_back(i+1);
    }
    while(v2.size()>2){
        v1.clear();
        x=1;
         for(int i=2;i<=v2.size();i++){
        cout << "? " << x << " " << i << endl;
        long long a;
        cin >> a;
        v1.push_back(a);
        m=min(m,a);
         }
         v2.clear();
           for(int i=0;i<v1.size();i++){
        if(v1[i]==m)v2.push_back(i+1);
    }

    }


    }
    return 0;
}




