#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    string s;
    cin >> s;
    int n = s.size();
    for(int sz = 1; sz < n; sz++){
        string o = s.substr(0,sz);
        string ord = o;
        sort(ord.begin(), ord.end());
        ord.erase(unique(ord.begin(),ord.end()),ord.end());
        o += ord;
        if (s == o){
            cout << sz << endl;
            return 0;
        }
    }
    return 0;
}