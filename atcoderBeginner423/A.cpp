#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, c, resp;
    cin >> x >> c;
    resp = 1000*(x/(1000+c));
    cout << resp << endl;
    return 0;
}