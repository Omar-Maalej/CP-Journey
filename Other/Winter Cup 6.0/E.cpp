#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while(t--)
    {
        int n,l=0;
        bool test = true;
        cin >> n;
        int p[n],a[n];

        for(int i=0;i<n;i++)
        {
            cin >> p[i];
        }
        for(int i=0;i<n;i++)
        {
            if(p[i]==0) {
                l++;
                a[i] = l;
            } else
            {
                a[i] = a[p[i]-1];
                if(p[i]>1)
                for(int j=0;j<p[i];j++)
                {
                    if(a[j] != a[i-p[i]+j+1]){
                        test=false;
                        break;
                    }
                }


                if((a[i-p[i]] == a[0]) && (a[i]==a[p[i]]) && (i>p[i])){
                    test = false;
                    break;
                }

            }
        }
        if(!test) cout << -1 << endl;
        else {
                for(int i=0;i<n;i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
        }
    }

    return 0;
}

