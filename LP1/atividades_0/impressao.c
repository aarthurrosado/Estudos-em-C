# include <stdio.h>
int main(){
    int num;
    int base = 1;
    printf("escreva um numero: ");
    scanf("%d", &num);
    while (base <= num)
    {
        printf("%d \n", base);
        base++;
    }
    
    return 0;
}
