#include<bits/stdc++.h>
using namespace std;
long long troca(long long a){
    string X = to_string(a);
    reverse(X.begin(), X.end());
    return stoll(X);
}
int main(){
    int x, y;
    cin >> x >> y;
    vector<long long> fib(10);
    fib[1] = (long long)x;
    fib[2] = (long long)y;
    for (int i = 3; i <= 10; i++){
        fib[i] = troca(fib[i-1] + fib[i-2]);
    }
    cout << fib[10] << endl;
    return 0;
}