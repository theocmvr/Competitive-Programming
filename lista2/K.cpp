#include<bits/stdc++.h>

using namespace std;

int main(){
    long long N;
    int K;
    string n;
    cin >> N >> K;
    for (int i = 0; i < K; i++){
        if (N%200 == 0){
            N /= 200;
        } else {
            n = to_string(N) + "200";
            N = stoll(n);
        }
    }
    cout << N << endl;
}