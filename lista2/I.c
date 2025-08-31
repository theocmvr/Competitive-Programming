#include<stdio.h>
void solve(long long n){
    while (n != 1){
        printf("%lld ", n);
        if (n%2 == 0){
            n = n/2;
        } else {
            n = 3*n + 1;
        }
    }
    printf("1\n");
}
int main(){
    long long n;
    scanf("%lld", &n);
    solve(n);
    return 0;
}