#include <stdio.h>
    int fatorial(int x){
    if(x == 1){
        return 1;
    } else{
        return x * fatorial(x - 1);
    }
    }
int main()
{
int num, resultado;
printf("Digite um número: ");
scanf("%d", &num);
resultado = fatorial(num);
printf("o resultado do fatorial de %d é %d \n", num, resultado);
    return 0;
}
