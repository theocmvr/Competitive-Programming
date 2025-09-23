#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t, n, c0, c1, h;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> c0 >> c1 >> h;
        cin >> s;
        int somainicial = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == '1'){
                somainicial += c1;
            } else {
                somainicial += c0;
            }
        }
        int somaatual = somainicial;
        int count = 0;
        if (c0 < c1){
            sort(s.begin(), s.end(), greater<char>());
            while(somaatual <= somainicial){
                somaatual += h - (c1-c0);
                count++;
                if (somaatual > somainicial || s[count-1] == '0' || count-1 == n){
                    cout << somaatual - h + (c1-c0) << endl;
                    break;
                }
            }
        } else if (c0 > c1){
            sort(s.begin(), s.end());
            while(somaatual <= somainicial){
                somaatual += h - (c0-c1);
                count++;
                if (somaatual > somainicial || s[count-1] == '1' || count-1 == n){
                    cout << somaatual - h + (c0-c1) << endl;
                    break;
                }
            }
        } else {
            cout << somainicial << endl;
        }
    }
    return 0;
}