#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a((int)s.size());
        vector<int> somas((int)s.size()+1);
        for (int j = 0; j < (int)s.size(); j++){
            a[j] = s[j] - '0';
        }
        int l = 0;
        int r = 0;
        somas[1] = a[0];
        somas[0] = 0;
        for (int k = 2; k <= (int)s.size(); k++){
            somas[k] = somas[k-1] + a[k-1];
        }
        int count = 0;
        while(l <= r && r < n){
            int valorarr;
            valorarr = somas[r+1] - somas[l];
            cout << "Soma do subarray: "<< valorarr << endl;
            cout << "Tamanho: " << r-l+1 << endl;
            if ((somas[r+1]-somas[l]) > (r-l+1)){
                l++;
            } else if ((somas[r+1]-somas[l]) < (r-l+1)){
                r++;
            } else {
                cout << " Eh valido !" << endl;
                count++;
                r++;
            }
        }
        cout << l << " : " <<r << endl;
        cout << count << endl;
    }
    return 0;
}