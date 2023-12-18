#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll= long long;

const long double _PI= 3.141592653589793238;

int main()
{
    fastIO;
    int n;
    cin >> n;
    double a[n];
    double sum = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    double d = sum /2;
    ll cnt = 0;
    double pref[n+1];
    int has[n+1];
    memset(has,0,sizeof(has));
    pref[0] = 0;
    for(int i=0;i<n;i++){
        pref[i+1]=pref[i]+a[i];
    }

    for(int i=1;i<=n;i++){
        if(pref[i]==d){
                cnt+=n-2;
                has[i]=1;
        }
        else if(i>1){
            int j=0;
            bool test = false;
            while(j<i){
                if(pref[i]-pref[j]==d){
                        test=true;
                }
                j++;
            }
            if(test)cnt+=n-2;
        }

        }

        }


    cout << cnt / 2<< endl;

    return 0;
}
