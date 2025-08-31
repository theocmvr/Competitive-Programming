#include<bits/stdc++.h>
using namespace std;
int checa_palindromo(string s){
    int n = s.size();
    for (int i = 0; i < n; i++){
        if (s[i] != s[n-i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    string s;
    string original;   
    cin >> s;
    original = s;
    if (checa_palindromo(s) == 1 and (int)s.size()%2 == 0){
        cout << "NO" << endl;
        return 0;
    } else if (checa_palindromo(s) == 1 and (int)s.size()%2 != 0){
        cout << "YES" << endl;
        return 0;
    }
    for (int i = 0; i < (int)s.size(); i++){
        s = original;
        for (int j = 0; j < 26; j++){
            s[i] = 97+j;
            if (checa_palindromo(s) == 1){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}