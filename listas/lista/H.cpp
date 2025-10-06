#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int length, aux = 1;
        string s, t, ordemS, ordemT;
        cin >> length >> s >> t;
        vector<int> sa, ta, sc, tc;
        if (count(s.begin(), s.end(), 'a') != count(t.begin(), t.end(), 'a') ||
        count(s.begin(), s.end(), 'b') != count(t.begin(), t.end(), 'b') ||
        count(s.begin(), s.end(), 'c') != count(t.begin(), t.end(), 'c')){
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < (int)s.size(); i++){
            if (s[i] != 'b'){
                ordemS.push_back(s[i]);
            }
        }
        for (int i = 0; i < (int)t.size(); i++){
            if (t[i] != 'b'){
                ordemT.push_back(t[i]);
            }
        }
        if (ordemS != ordemT){
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < length; i++){
            if (s[i] == 'a'){
                sa.push_back(i);
            }
            if (t[i] == 'a'){
                ta.push_back(i);
            }
            if (s[i] == 'c'){
                sc.push_back(i);
            }
            if (t[i] == 'c'){
                tc.push_back(i);
            }
        }
        for (int i = 0; i < (int)sa.size(); i++){
            if(sa[i] > ta[i]){
                aux = 0;
            }
        }
        for (int i = 0; i < (int)sc.size(); i++){
            if (sc[i] < tc[i]){
                aux = 0;
            }
        }
        if (aux){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}   