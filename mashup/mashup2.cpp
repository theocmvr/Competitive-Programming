#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n, m;
    cin >> n >> m;
    ll sz = n*m;
    if(sz%2 == 0){
        cout << sz/2 << endl;
    } else {
        cout << (sz+1)/2 << endl;
    }
    return 0;
}