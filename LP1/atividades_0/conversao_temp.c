#include <stdio.h>
int main(){
    int temperatura;
    char tipo;
    printf("Celsius ou Farenheit? [F OU C] ?\n");
    scanf("%c", &tipo);
    printf("Escreva uma temperatura\n");
    scanf("%d", &temperatura);
    if (tipo == "C")
    {
        printf("fazendo conversao. . . \n");
        temperatura = (temperatura * 1.8) + 32;
        printf("temperatura convertida em Farenheit %d", temperatura);
    } else{
         printf("fazendo conversao. . . \n");
        temperatura = (temperatura - 32) / 1.8;
         printf("temperatura convertida em Celsius : %d", temperatura);

    }
    

}
