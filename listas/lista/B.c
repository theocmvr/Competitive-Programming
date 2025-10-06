#include<stdio.h>
int main(){
    long long n, d, soma_esperada = 0, soma_total = 0, resp;
    scanf("%lld", &n);
    soma_esperada = (n*(n + 1))/2;
    for (long long i = 1; i <= n - 1; i++){
        scanf("%lld", &d);
        soma_total += d;
    }
    resp = soma_esperada - soma_total;
    printf("%lld\n", resp);
    return 0;
}