#include <stdio.h>
int buscabinaria(int vetor[], int tamanho, int chave){
    int inicio = 0;
    int fim = tamanho;
    while(inicio <= fim){
            int meio = (inicio + fim) / 2;
            if (chave < vetor[meio])
            {
                fim = meio - 1;
            } else if (chave > vetor[meio])
            {
                inicio = meio + 1;
            } else {
                return meio;
        }   
        }
    return -1;
}

int main(){

int vetor[] = {1, 2 , 3, 4 , 5 , 6, 7, 8, 9, 10};
int tamanho = sizeof(vetor) / sizeof(vetor[0]);
int chave = 5;
int resultado = buscabinaria(vetor, tamanho, chave);
if (resultado != -1){
    printf("A chave foi encontrada na posicao %d", resultado);
} else{
    printf("a chave nao foi encontrada");
}
}

// No pior caso o algoritmo de busca binaria, teremos a complexidade O(log(n)), o que e extremamente eficiente e daria alguns segundos.
