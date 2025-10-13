#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, aux = 0, fim = 0;;
        string s, rs, os;
        int bob = 0, alice = 0;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++){
            os = s;
            reverse(os.begin(), os.end());
            rs = os;
            if (s != rs && aux == 0) {
                //cout << "Segunda" << endl;
                reverse(s.begin(), s.end()); 
                aux = 1;
            } else {
                //cout << "Primeira" << endl;
                aux = 0;
                auto it = find(s.begin(), s.end(), '0');
                if (it != s.end()){ 
                    *it = '1';
                    if (i%2 == 0) alice++;
                    else bob++; 
                } else {
                    break;
                }
            }
        }
        //cout << alice << endl;
        //cout << bob << endl;
        if (alice < bob) cout << "ALICE" << endl;
        else if (bob < alice) cout << "BOB" << endl;
        else cout << "DRAW" << endl;
    }
    return 0;
}