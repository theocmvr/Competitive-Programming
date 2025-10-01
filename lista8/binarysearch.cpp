#include<bits/stdc++.h>
using namespace std;
#define ll long long
//retorna 1 se é possível dividir
//em
int P(vector<ll>& v, ll k, ll mid){
    ll soma = 0, divisoes = 1;
    for (int i = 0; i < (int)v.size(); i++){
        if(soma + v[i] > mid){
            soma = v[i];
            divisoes++;
        } else if(v[i] > mid){
            return 0;
        } else {
            soma += v[i];
        }
    }
    return (divisoes <= k);
}
int main(){
    // [l, r]
    // mid = (l + r)/2
    // [l, mid -1] ou [mid+1, r], descarta um dos dois
    // T(n) = T(n/2) + O(1)
    // O(log n)
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    ll l = 1, r = 2e14+1, res = -1;
    while(l <= r){
        ll mid = (l+r)/2;
        if (P(v, k, mid)){
            r = mid-1;
            res = mid;
        } else {
            l = mid +1;
        }
    }
    cout << res << endl;
    return 0;
}