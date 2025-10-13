#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    set<int> socks;
    int casos = 2*n;
    int sametime = 0;
    while(casos--){
        int meia;
        cin >> meia;
        if((socks.insert(meia)).second) socks.insert(meia);
        else socks.erase(meia);  
        sametime = max(sametime, (int)socks.size());
    }
    cout << sametime << endl;
    return 0;
}