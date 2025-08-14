#include <stdio.h>
int mutiplicacao(int x, int y){
    if (y == 0){
        return 0;
    }
    else{
        return x + mutiplicacao(x, y - 1);
    }
}
int main()
{
int resultado = mutiplicacao(4, 5);
printf("resultado final = %d \n", resultado);
    

    return 0;
}
