#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1000000007;
ll fastPow(ll a, ll b, ll mod) {
    long long res = 1;
    a %= mod;
    
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}
int main(){
    int n;
    ll a, b;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        cout << fastPow(a, b, mod) << endl;     
    }
    return 0;
}