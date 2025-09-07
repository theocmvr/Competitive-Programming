#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, x, count, soma, inicio;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    count = 0;
    soma = 0;
    inicio = 0;
    for (int i = 0; i < n; i++){
        soma += a[i];
        while (soma > x && inicio <= i){
            soma -= a[inicio];
            inicio++;
        }
        if (soma == x){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}