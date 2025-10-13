//Algoritmo  básico para questões de Soma de Prefixos
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Prefix Sum 1D
vector<long long> buildPsum(vector<int>& arr) {
    int n = arr.size();
    vector<long long> psum(n + 1, 0);
    for (int i = 0; i < n; i++) {
        psum[i + 1] = psum[i] + arr[i];
    }
    return psum;
}
// Soma do intervalo [l, r] (0-indexed)
long long rangeSum(vector<long long>& psum, int l, int r) {
    return psum[r + 1] - psum[l];
}
int main(){
    //CF 1843D - Apple Tree
    //CF 1723B - Ugu
    //CF 363B - Fence
    //CF 1398C - Good Subarrays
    return 0;
}