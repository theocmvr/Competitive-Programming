#include<stdio.h>
#include<string.h>
int main(){
    int n = 1, maior = 1;
    char str[1000001];
    scanf("%s", str);
    for (int i = 1; i < strlen(str); i++){
        if (str[i] == str[i - 1]){
            n++;
        } else {
            if (n > maior){
                maior = n;
            }
            n = 1;
        }
    }
    if (n > maior){
        maior = n;
    }
    printf("%d\n", maior);
    return 0;
}