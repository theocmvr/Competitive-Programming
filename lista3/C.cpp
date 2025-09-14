#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    ll soma = 0;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        soma += a[i];
    }
    ll x;
    cin >> x;
    ll ciclos = x/soma;
    ll somaB = ciclos*soma;
    ll resp = ciclos*n;
    for (int i = 0; i < n; i++){
        somaB += a[i];
        resp++;
        if (somaB > x){
            cout << resp << endl;
            break;
        }
    }
    return 0;
}