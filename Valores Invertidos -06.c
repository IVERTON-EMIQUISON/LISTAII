#include <stdio.h>
#include <stdlib.h>

void trocar(int v[], int ini, int fin){
    int aux;
    if(ini < fin){
        aux = v[ini];
        v[ini] = v[fin];
        v[fin] = aux;
        trocar(v, ini + 1, fin - 1);
    }
}

void imprimir(int v[], int tam){
    if(tam == 1)
        printf("%d; ", v[tam - 1]);
    else{
        imprimir(v, tam - 1);
        printf("%d; ", v[tam - 1]);
    }
}

int main () {

    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    imprimir(vet, 10);
    trocar(vet, 0, 9); // vetor, índice inicial e índice final
    printf("\n");
    imprimir(vet, 10);
    printf("\n");

    return 0;
}