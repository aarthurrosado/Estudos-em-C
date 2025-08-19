#include <stdio.h>
int fatorial(int x){
    if (x <= 1){
        return 1;
    } else{
        return x * fatorial(x - 1);
    }
}
int main(){
    int num, resultado;
    printf("digite um numero: ");
    scanf("%d", &num);
    resultado = fatorial(num);
    printf("fatorial de %d = %d", num, resultado);
    return 0;
}
