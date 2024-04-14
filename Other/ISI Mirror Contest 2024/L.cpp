#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int


const long double _PI= 3.141592653589793238;
const int P = 1e9+7 ;//it should be prime number because we are using fermat's little theorem which is only applicable for prime numbers
//the theorem is : a^(p-1) = 1 (mod p) where p is prime number and a is any number so  we can write a^(p-2) = a^(-1) (mod p) which is the inverse of a


int addmod(int a, int b){
    return (a + b) % P;
}

int submod(int a, int b){
    return (a - b + P) % P;// to make sure the remainder is in the range [0, P-1]
}

int multiplymod(int a, int b){
    return (a * b) % P;//a and b must be long long int because at worst case a*b can be 1e18 which cannot be stored in int
}

int powermod(int a, int b){
    //it determines a^b (mod p)
    //fast exponentiation in O(log(b))
    int res = 1;
    while(b){
        if(b & 1){
            res = multiplymod(res, a);
        }
        a = multiplymod(a, a);
        b >>= 1;
    }
    return res;
}

int modInverse(int a){
    //it determines  a^(-1) (mod p)
    ///O(log(P ))
    //using fermat's little theorem
    return powermod(a, P - 2);
}

int divideMod(int a, int b){
    // it determines a/b (mod p)
    //O(log(P ))
    //a/b = a * (b^(-1)) (mod p) = a * (b^(p-2)) (mod p)
    return multiplymod(a, modInverse(b));
}




int32_t main()
{
    fastIO;

    int n, m;
    cin >> n >> m;
    int MOD = P;

    int k = 1;
    map<int , int> segments;
    for(int i=1;i<=m;i++){
        int a;
        cin >> a;
        segments[a-k]++;
        k = a+1;
    }
    segments[n-k + 1]++;
    int ans = 0;
    for(auto x : segments){
        int i = x.first;

        int x1 = divideMod( ( ((i * (i+1)) % MOD ) * (i+1)) % MOD , 2);
        int x2 = divideMod((( (i * (i+1)) % MOD ) * ((2*i+1) % MOD )) % MOD, 6);
        int cur = (x1 % MOD - x2 % MOD) % MOD;
        cur = (cur + MOD) % MOD;
        cur = (cur * x.second)% MOD;
        ans = (ans + cur) % MOD;
    }

    cout << ans << endl;


    return 0;
}
