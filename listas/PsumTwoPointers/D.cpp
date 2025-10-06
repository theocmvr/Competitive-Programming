#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, d, inicio, size, count;
    cin >> n >> d;
    vector<ll> cord(n);
    for (int i = 0; i < n; i++){
        cin >> cord[i];
    }
    count = 0;
    inicio = 0;
    for (int i = 0; i < n; i++){
        while (cord[i] - cord[inicio] > d){
            inicio++;
        }
        size = i - inicio;
        if (size >= 2){
            count += (size*(size-1))/2;
        }
    }
    cout << count << endl;
    return 0;
}