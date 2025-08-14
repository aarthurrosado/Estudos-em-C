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
int resultado = fatorial(3);
printf("o resultado do fatorial de 3 é %d \n", resultado);
    return 0;
}
