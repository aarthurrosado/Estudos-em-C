#include <stdio.h>
    int soma(int n){
        if (n == 0){
            return 0;
        } else{
            return n + soma(n - 1);
        }
    }
int main()
{
int resultado = soma(4);
printf("resultado da soma é %d \n",resultado);

}
