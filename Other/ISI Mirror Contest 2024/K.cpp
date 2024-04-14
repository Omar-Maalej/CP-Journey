#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;

    long long n,m;
    cin >> n >> m;

    string a,b;
    cin >> a >> b;

    if(n>m){swap(n,m);
            swap(a,b);
    }

    map<char, int> ma, mb;
    for(int i=0;i<n;i++){
        ma[a[i]]++;
    }

    for(int i=0;i<m;i++){
        mb[b[i]]++;
    }



        for(auto x: ma){
            if(x.second>mb[x.first]){cout << "NO" << endl;
            return 0;
            }
            mb[x.first]-=x.second;
        }

        if(n==m){
            cout << "YES" << endl;
            return 0;
        }
        m-=n;
        int cnt = 0;
        for(auto x:mb){
            if(x.second%2){
                cnt++;
            }
        }
        if(m%2 == 1 && cnt==1)cout << "YES" << endl;
        else if(m%2==0 && cnt ==0)cout << "YES" << endl;
        else cout << "NO" << endl;




    return 0;
}



