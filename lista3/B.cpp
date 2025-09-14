#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    string s;
    cin >> s;
    cin >> x;
    vector<int> letras(27);
    for(int i=97; i <= 123; i++){
        letras[i-97] = i;
    }
    for(int i = 0; i < x; i++){
        char c, d;
        cin >> c >> d;
        for (int j = 0; j < 27; j++){
            if (letras[j] == c){
                letras[j] = d;
            }
        }        
    }
    for (int i = 0; i < n; i++){
        s[i] = letras[s[i]-97];
    }
    cout << s << endl;
    return 0;
}