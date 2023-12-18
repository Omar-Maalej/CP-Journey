#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1)
        return false;
    if(n<=3)
        return true;
    if(n%2==0 || n%3 == 0)
        return false;
    for(int i=5;i*i<=n;i+=6){
        if(n%i == 0 || n%(i+2) == 0)
            return false;
    }
    return true;
}
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> primes;
    for(int i=5;i<=n;i++){
            if(isPrime(i))
            primes.push_back(i);
    }
    int cnt = 0;
    for(int i=2;i<primes.size();i++){
            int j=0;
            while(j<i-1){
                if( (primes[i]-1) == primes[j]+primes[j+1] )
                    cnt++;
                j++;
            }

    }
    cout << (cnt >= k ? "YES" : "NO") << endl;

    return 0;
}
