#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, q, a, b, soma;
    cin >> n >> q;
    vector<ll> x(n+1, 0);
    vector<ll> somas(n+1, 0);
    for (int i = 1; i <= n; i++){
        cin >> x[i];
        somas[i] = somas[i-1] + x[i]; 
    }
    for (int i = 0; i < q; i++){
        cin >> a >> b;
        cout << somas[b] - somas[a-1] << endl; 
    }
    return 0;
}