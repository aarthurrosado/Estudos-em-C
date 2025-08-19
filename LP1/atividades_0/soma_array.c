# include <stdio.h>
int main(){
    int numeros[5];
    int soma = 0;
for (int i = 0; i < 5; i++)
{
    printf("escreva um numero ");
    scanf("%d", &numeros[i]);
    soma += numeros[i];
} 
printf("soma e %d", soma);
}
