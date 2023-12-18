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
    string A,B;
    cin >> A >> B;
    int luffy = 1;
    for(int i=0;i<n;i++){
        if(A[i]<B[i]){
            luffy = !luffy;
        }else if(A[i]==B[i]){
            if(luffy)cout << "Luffy" << endl;
            else cout << "Zoro" << endl;
            return 0;
        }

    }


    if(luffy)cout << "Luffy" << endl;
    else cout << "Zoro" << endl;
    return 0;
}
