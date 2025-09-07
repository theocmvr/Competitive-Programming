#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, k, x, a, b, c, soma = 0, resp;
    cin >> n >> k;
    cin >> x >> a >> b >> c;
    vector<ll> windows(n);
    windows[0] = x;
    for (int i = 1; i < n; i++){
        windows[i] = (a*windows[i-1] + b)%c;
    }
    for (int i = 0; i < k; i++){
        soma += windows[i];
    }
    resp = soma;
    for (int i = k; i < n; i++){
        soma += windows[i] - windows[i-k];
        resp ^= soma;
    }
    cout << resp << endl;
    return 0;
}