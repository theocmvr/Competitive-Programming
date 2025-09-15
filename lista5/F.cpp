#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, total, resto;
    cin >> n;
    vector<pair<ll, ll>> pares(n);
    for(int i = 0; i < n; i++){
        cin >> pares[i].first >> pares[i].second;
    }
    sort(pares.begin(), pares.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b){
        return (a.first-a.second) > (b.first-b.second);
    });
    total = 0;
    resto = 0;
    // cout << "Total inicial: " << total << endl;
    // cout << "Resto inicial: " << resto << endl;
    for (int i = 0; i < n; i++){
        if (resto < pares[i].first){
            total += pares[i].first-resto;
            resto += pares[i].first-resto;
        }
        resto -= pares[i].second;
        // cout << "Total do caso " << i << ": " << total << endl;
        // cout << "Resto do caso " << i << ": " << resto << endl;
    }
    cout << total << endl;
    return 0;
}