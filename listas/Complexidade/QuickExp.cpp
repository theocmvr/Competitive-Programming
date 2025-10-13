//Algoritmo básico para questões de Exponenciacão rápida
#include<bits/stdc++.h>
using namespace std;
#define ll long long

//fast exp recursivo
int fexp(int b, int e) {
    if(e == 0) return 1;
    int answer = fexp(b, e/2);
    answer = (answer * answer);
    if(e%2 == 1) answer = answer * b;
    return answer;
}
//fast exp iterativo
int ifexp(int b, int e){
    int result = 1;   
    while (e){
        if(e&1) result *= b;
        b *= b;
        e /= 2;
    }
    return result;
}
// Exponenciação modular
long long fastPow(long long a, long long b, long long mod) {
    long long res = 1;
    a %= mod;
    
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}

// Versão recursiva
long long fastPowRec(long long a, long long b, long long mod) {
    if (b == 0) return 1;
    long long half = fastPowRec(a, b / 2, mod);
    half = (half * half) % mod;
    if (b & 1) half = (half * a) % mod;
    return half;
}

// Inverso modular (quando mod é primo)
long long modInv(long long a, long long mod) {
    return fastPow(a, mod - 2, mod); // Fermat's little theorem
}

// Multiplicação de matrizes (útil para Fibonacci, DP)
const long long MOD = 1e9 + 7;

vector<vector<long long>> multiply(vector<vector<long long>>& A, 
                                   vector<vector<long long>>& B) {
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
int main(){
    //CF 1669H - Maximal AND
    //CF 1527B1 - Palindrome Game (easy version)
    //CF 1787C - Remove the Bracket
    //CF 6301 - Parking lot
    return 0;
}