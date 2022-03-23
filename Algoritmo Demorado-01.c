#include <stdio.h>
#include <time.h>
#include <math.h>
 

int algoritmoDemorado ( int n ) {
int soma = 0;
for ( int i = 0; i < n ; i ++) {
    for ( int j = 0; j < n ; j ++) {
        for ( int k = 0; k < n ; k ++) {
            for ( int l = 0; l < n ; l ++) {
             soma = i + j + k + l ;
           }
        } 
    }
}
  return soma ;
 }
int main(){
    int t;
    
    clock_t start = clock();
    printf("Informe um numero inteiro para verificar o tempo de execucao: ");
    scanf("%d",&t);

    algoritmoDemorado(t);

    clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Tempo em seguando foi %f para excutar o numero %d\n", cpu_time_used,t);
    
}