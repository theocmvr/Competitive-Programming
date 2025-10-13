//Algoritmo  básico para questões de Set
#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<int> s = {10, 20, 30, 40, 50};

// 1. Primeiro elemento >= x
int primeiro_maior_igual(int x) {
    auto it = s.lower_bound(x);
    if (it == s.end()) return -1;
    return *it;
}

// 2. Primeiro elemento > x
int primeiro_maior(int x) {
    auto it = s.upper_bound(x);
    if (it == s.end()) return -1;
    return *it;
}

// 3. Maior elemento < x (PREDECESSOR)
int maior_menor(int x) {
    auto it = s.lower_bound(x);
    if (it == s.begin()) return -1;
    it--;
    return *it;
}

// 4. Maior elemento <= x
int maior_menor_igual(int x) {
    auto it = s.upper_bound(x);
    if (it == s.begin()) return -1;
    it--;
    return *it;
}

int main(){
    //CF 1462C - Unique Number
    //CF 1793C - Dora and Search
    //CF 1791G1 - Teleporters (Easy)
    //CF 1676E - Eating Queries 
    set<int> s;
    int x;
    // Inserção
    s.insert(x);
    
    // Busca
    if (s.find(x) != s.end()) { /* existe */ }
    if (s.count(x)) { /* existe */ }
    
    // Lower/Upper bound
    auto it = s.lower_bound(x); // >= x
    auto it2 = s.upper_bound(x); // > x
    
    // Remoção
    s.erase(x); // por valor
    s.erase(it); // por iterador
    
    // Min/Max
    int minimo = *s.begin();
    int maximo = *s.rbegin();
    
    return 0;

}