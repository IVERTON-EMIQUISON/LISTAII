#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define v 0 // vazio
#define p 1 // parede
#define s 2 // saida
#define comida 3 // comida

int pontos=0, linha=1, coluna=1;

int mapa[8][8] = {
    1,1,1,1,1,1,1,1,
    1,0,1,1,0,1,0,1,
    1,3,1,1,0,1,0,1,
    1,3,3,3,3,1,0,1,
    1,0,1,1,3,3,3,1,
    1,0,1,1,0,1,3,1,
    1,0,1,0,0,1,2,1,
    1,1,1,1,1,1,1,1,
    
};

void monta_mapa(){
    int l, c;
    for(l=0; l<8; l++){
        for(c=0; c<8; c++){
            if(l==linha && c==coluna) printf(" \x01 ");
            else{
                if(mapa[l][c]==v) printf("   ");
                if(mapa[l][c]==s) printf("III");
                if(mapa[l][c]==p) printf("%c%c%c",219,219,219);
               if(mapa[l][c]==comida) printf(" %c ",15);
            }
        }
        printf("\n");
    }
    printf("\n\n");
}

int main(){
    int a, i;
    int key, saiu=0;

    monta_mapa();
    while(saiu==0){
        key=getch();
        if(key=='w' || key=='W'){
            linha--;
            if(mapa[linha][coluna]==p) linha++;
            if(mapa[linha][coluna]==comida){
                pontos++;
                mapa[linha][coluna] = v;
            }
        }
        if(key=='a' || key=='A'){
            coluna--;
            if(mapa[linha][coluna]==p) coluna++;
            if(mapa[linha][coluna]==comida){
                pontos++;
                mapa[linha][coluna] = v;
            }
        }
        if(key=='s' || key=='S'){
            linha++;
            if(mapa[linha][coluna]==p) linha--;
            if(mapa[linha][coluna]==comida){
                pontos++;
                mapa[linha][coluna] = v;
            }
        }
        if(key=='d' || key=='D'){
            coluna++;
            if(mapa[linha][coluna]==p) coluna--;
            if(mapa[linha][coluna]==comida){
                pontos++;
                mapa[linha][coluna] = v;
            }
        }
        if(mapa[linha][coluna]==s) saiu++;
        system("cls");
        monta_mapa();
    } 
    system("cls");
    printf("Voce conseguiu sair do labirinto! Voce fez %d pontos.\n",pontos);
    system("pause");
}