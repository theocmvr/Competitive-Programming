//Algoritmo básico para questões de Two Pointers(Janela deslizante)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Padrão 2: Sliding Window com condição
int maxSubarrayWithSum(vector<int>& arr, int maxSum) {
    int n = arr.size();
    int left = 0, sum = 0, maxLen = 0;
    
    for (int right = 0; right < n; right++) {
        sum += arr[right];
        
        while (sum > maxSum) {
            sum -= arr[left];
            left++;
        }
        
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
// Padrão 3: Contar subarrays válidos
long long countSubarrays(vector<int>& arr) {
    int n = arr.size();
    int left = 0;
    long long count = 0;
    
    for (int right = 0; right < n; right++) {
        // ajustar left enquanto condição não é satisfeita
        while (left <= right) {
            left++;
        }
        count += (right - left + 1);
    }
    return count;
}
int main(){
    //CF 1800C2 - Powering the Hero (hard version)
    //CF 1702C - Train and Queries
    //CF 1747B - BAN BAN
    //CF 1676E - Eating Queries
    return 0;
}