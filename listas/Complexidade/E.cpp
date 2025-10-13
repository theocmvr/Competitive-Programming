#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long MOD = 1e9 + 7;
vector<vector<long long>> multiply(vector<vector<long long>>& A, vector<vector<long long>>& B) {
    int n = A.size();
    vector<vector<long long>> C(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
    return C;
}
vector<vector<long long>> matPow(vector<vector<long long>> mat, long long n) {
    int sz = mat.size();
    vector<vector<long long>> res(sz, vector<long long>(sz, 0));
    for (int i = 0; i < sz; i++) res[i][i] = 1; // identidade
    
    while (n > 0) {
        if (n & 1) res = multiply(res, mat);
        mat = multiply(mat, mat);
        n >>= 1;
    }
    return res;
}
long long fibonacci(long long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    vector<vector<long long>> mat = {{1, 1}, {1, 0}};
    
    auto result = matPow(mat, n - 1);
    
    return result[0][0];
}
int main(){
    ll n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}