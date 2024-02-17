#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;
const int MxN = 1e7+1;
int main()
{
        fastIO;

        vector<int> next(MxN, 1);
        for(int i = 2 ; i*i<MxN ; i++){
            if(next[i]==1)
            {
            for(int j=2*i ; j<MxN; j+=i ){
                if(next[j]==1)next[j]=j/i;
            }
            }

        }

        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n], b[n];
            for(int i=0;i<n;i++){
                cin >> a[i];
            }
            for(int i=0;i<n;i++){
                cin >> b[i];
            }
            int cnt = 0;
            for(int i=0;i<n;i++){
                while(a[i]!=b[i]){
                    if(a[i]>b[i])a[i]=next[a[i]];
                    else b[i]=next[b[i]];
                    cnt++;
                }
            }
            cout << cnt << endl;

        }



    return 0;
}

