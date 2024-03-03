#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

const long double _PI= 3.141592653589793238;

const int P = 998244353 ;//it should be prime number because we are using fermat's little theorem which is only applicable for prime numbers
//the theorem is : a^(p-1) = 1 (mod p) where p is prime number and a is any number so  we can write a^(p-2) = a^(-1) (mod p) which is the inverse of a
const int N = 1e5 ;
int fact[N];

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

void calculateFactorialMod(){
    // it determines the factorial of all numbers from 0 to N (mod p)
    //O(N)
    fact[0] = 1;
    for(int i = 1; i <= N; i++){
        fact[i] = multiplymod(fact[i - 1], i);
    }
}

int nCr(int n, int r){
    //it determines nCr (mod p)
    //O(log(P ))
    //nCr = n! / (r! * (n - r)!)
    //nCr = n! * (r! * (n - r)!)^(-1) (mod p)
    //nCr = n! * (r! * (n - r)!)^(p - 2) (mod p)
    int numerator = fact[n];
    int denominator = multiplymod(fact[r], fact[n - r]);
    return multiplymod(numerator, modInverse(denominator));
}




int32_t main()
{
    fastIO;
    int n;
    cin >> n;
    calculateFactorialMod();
    cout << nCr(n,n/2) << endl;

    return 0;
}




