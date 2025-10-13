//Algoritmo básico para questões de Busca Bináriae
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Busca binária em array ordenado
int buscaBinaria(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2; // evita overflow
        
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1; // não encontrado
}

// lower_bound: primeiro elemento >= target
int lower_bound_manual(vector<int>& arr, int target) {
    int left = 0, right = arr.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target) left = mid + 1;
        else right = mid;
    }
    return left;
}

// upper_bound: primeiro elemento > target
int upper_bound_manual(vector<int>& arr, int target) {
    int left = 0, right = arr.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= target) left = mid + 1;
        else right = mid;
    }
    return left;
}

int main(){
    // [l, r]
    // mid = (l + r)/2
    // [l, mid -1] ou [mid+1, r], descarta um dos dois
    // T(n) = T(n/2) + O(1)
    // O(log n)
    //CF 1873F - Money Trees
    //CF 1611C - Polycarp Recovers the Permutation
    //CF 279B - Books
    //CF 1760E - Binary Inversions
}
