#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a((int)s.size());
        vector<int> somas((int)s.size()+1);
        for (int j = 0; j < (int)s.size(); j++){
            a[j] = s[j] - '0';
        }
        int left = 0;
        int right = 0;
        somas[1] = a[0];
        somas[0] = 0;
        for (int k = 2; k <= (int)s.size(); k++){
            somas[k] = somas[k-1] + a[k];
        }
        int count = 0;
    }
    return 0;
}