#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1000000007;
ll exp(vector<pair<int, int>> &num){
    for (int i = 0; i < (int)num.size(); i++){
        ll valor = (ll)pow((double)num[i].first, (double)num[i].second)%1000000007;
        cout << valor << endl;
    }
    return 0;
}
int main(){
    int n;
    int a, b;
    cin >> n;
    vector<pair<int,int>> num(n);
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        num[i].first = a;
        num[i].second = b;     
    }
    exp(num);
    return 0;
}