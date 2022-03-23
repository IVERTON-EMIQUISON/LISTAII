#include <stdio.h>

int fatorial (int k ) {
    if ( k == 0) {
        return 1; /* caso em que a solução e direta*/
    }else {
        return k * fatorial ( k - 1);/* caso em que a Chamada e recursiva da seguente forma n! será = n.(n-1)! */
   }
}

int binomio(int k, int n){
    if(n == 0){
        return 1;
    }
    else{
        return (fatorial(k) / (fatorial(n)* fatorial(k-n)));

    }
}

int main(){
   int k,n;
    printf("Digete o valor de 'K'\n");
    scanf("%d",&k);

    printf("Agora informe o valor de 'N'\n");
    scanf("%d",&n);
 
   int res = binomio(k,n);

    printf("O binomial de %d sobre %d resultou em: %d\n",k,n,res);

   return 0;
}