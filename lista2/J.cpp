#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll menor = LLONG_MAX;
vector<ll> pesos;
void solve(int i, ll g1, ll g2){
    if (i == n){
        menor = min(menor, abs(g1 - g2));
        return;
    }
    solve (i + 1, g1 + pesos[i], g2);
    solve (i + 1, g1, g2 + pesos[i]);
}
int main(){
    cin >> n;
    pesos.resize(n);
    for (int i = 0; i < n; i++){
        cin >> pesos[i];
    }
    solve (0, 0, 0);
    cout << menor << endl;
    return 0;
}