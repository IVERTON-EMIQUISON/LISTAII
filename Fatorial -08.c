#include <stdio.h>


int fatorial (int n ) {
    if ( n == 0) {
        return 1; /* caso em que a solução e direta*/
    }else {
        return n * fatorial ( n - 1);/* caso em que a Chamada e recursiva da seguente forma n! será = n.(n-1)! */
   }
}
int fatorial_aux(int n, int y){
    if (n == 1){
        return y;
    }else{
       return fatorial_aux((n - 1), (y * n));
    }
}
int fatorial_calda(int n){
    return fatorial_aux(n, 1);
}

int main(){
    int n;
    printf("Calcule o fatorial de um número! ");
    scanf("%d",&n);

    int fat = fatorial(n);
    printf("fatorial de %d é: %d\n",n,fat);

    
    int fat_cal = fatorial_calda(n);
    printf("\nfatorial com calda: %d\n",fat_cal);

  return (0);
}