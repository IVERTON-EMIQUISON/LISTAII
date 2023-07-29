//Discente: IVERTON EMIQUISON RIBEIRO DE BESSA

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int senha, op, quantidadeVotantes=0, sequencia;
    char representante1[41], numeroRepresentante1[6], representante2[41], numeroRepresentante2[6], representante3[41], numeroRepresentante3[6], representante4[41], numeroRepresentante4[6], representante5[41], numeroRepresentante5[6];
    char presidente1[41], numeroPresidente1[3], presidente2[41], numeroPresidente2[3];
    char votoEstudanteRepresentante[10], votoEstudantePresidente[10];
    int votoParaRepresentante1=0, votoParaRepresentante2=0, votoParaRepresentante3=0, votoParaRepresentante4=0, votoParaRepresentante5=0, votoBrancoRepresentante=0, votoNuloRepresentante=0;
    int votoParaPresidente1=0, votoParaPresidente2=0, votoBrancoPresidente=0, votoNuloPresidente=0;
    char decisaoEstudanteRepresentante[10], decisaoEstudantePresidente[10];

    printf("Digite a senha para acessar o menu principal:");
    scanf("%d", &senha);

    while(senha!=14995){
        printf("Senha Incorreta! Verifique a senha e digite novamente:");
        scanf("%d", &senha);
    }

    printf("\tLOGIN PERMITIDO! \nBem-Vindo(a) a urna eletrOnica\n\n");
    system("pause");
    system("cls");

    do{
    printf("   \nELEICOES ESTUDANTIS\n");
    printf("1- Iniciar votacao\n");
    printf("2- Definir quantidade de votantes\n");
    printf("3- Contabilizar votos\n");
    printf("4- Cadrastar candidatos\n");
    printf("5- Sair\n");
    printf("Opcao:");
    scanf("%d", &op);

    switch(op){
        case 1:
        	 system("cls");
        if (quantidadeVotantes<=0){
             printf("\nPara iniciar a votacao, e necessario declarar a quantidade de votantes.\n");
             system("pause");
             system("cls");
        }else{
            for(sequencia=1; sequencia<=quantidadeVotantes; sequencia++) {
                corrigePrimeiroVoto: printf("\nVOTANTE:%d\n", sequencia);
                printf(" -----------------------------      ---------------------------\n");
                printf("|       Seu voto para         |    |     Justica Estudantil    |\n");
                printf("|         REPRESENTANTE       |    |                           |\n"); 
                printf("|                             |    |          1 2 3            |\n");
                printf("|         _ _ _ _ _           |    |          4 5 6            |\n");
                printf("|                             |    |          7 8 9            |\n");
                printf("|                             |    |            0              |\n");
                printf("|                             |    |  BRANCO CORRIGE CONFIRMA  |\n");
                printf(" -----------------------------      ---------------------------\n");
                
                printf("Voto:");
                scanf(" %[^\n]s", &votoEstudanteRepresentante);

                if(strcmp(votoEstudanteRepresentante, numeroRepresentante1)==0){
                        printf("\nVoto para representante %s\n", representante1);

                }else if(strcmp(votoEstudanteRepresentante, numeroRepresentante2)==0){
                        printf("\nVoto para representante %s\n", representante2);

                }else if(strcmp(votoEstudanteRepresentante, numeroRepresentante3)==0){
                        printf("\nVoto para representante %s\n", representante3);

                }else if(strcmp(votoEstudanteRepresentante, numeroRepresentante4)==0){
                        printf("\nVoto para representante %s\n", representante4);

                }else if(strcmp(votoEstudanteRepresentante, numeroRepresentante5)==0){
                        printf("\nVoto para representante %s\n", representante5);

                }else if(strcmp(votoEstudanteRepresentante, "BRANCO")==0){
                        printf("\nVoto BRANCO para representante\n");

                }else {
                        printf("\nVoto NULO para representante\n");
                }

                printf("\nVoce deseja continuar com seu voto? Digite SIM para continuar ou digite CORRIGE para corrigir:");
                scanf(" %[^\n]s", &decisaoEstudanteRepresentante);

                if (strcmp(decisaoEstudanteRepresentante, "CORRIGE")==0){
                    printf("\nVoto corrigido! Vote novamente!");
                    goto corrigePrimeiroVoto;

                }else{
                        if(strcmp(votoEstudanteRepresentante, numeroRepresentante1)==0){
                        votoParaRepresentante1++;

                    }else if(strcmp(votoEstudanteRepresentante, numeroRepresentante2)==0){
                        votoParaRepresentante2++;

                    }else if(strcmp(votoEstudanteRepresentante, numeroRepresentante3)==0){
                        votoParaRepresentante3++;

                    }else if(strcmp(votoEstudanteRepresentante, numeroRepresentante4)==0){
                        votoParaRepresentante4++;

                    }else if(strcmp(votoEstudanteRepresentante, numeroRepresentante5)==0){
                        votoParaRepresentante5++;

                    }else if(strcmp(votoEstudanteRepresentante, "BRANCO")==0){
                        votoBrancoRepresentante++;

                    }else {
                        votoNuloRepresentante++;
                    }
                }

                system("pause");
                system("cls");

                corrigeSegundoVoto:printf("\nVOTANTE:%d\n", sequencia);
                printf(" -----------------------------      ---------------------------\n");
                printf("|       Seu voto para         |    |     Justica Estudantil    |\n");
                printf("|         PRESIDENTE          |    |                           |\n"); 
                printf("|                             |    |          1 2 3            |\n");
                printf("|           _ _               |    |          4 5 6            |\n");
                printf("|                             |    |          7 8 9            |\n");
                printf("|                             |    |            0              |\n");
                printf("|                             |    |  BRANCO CORRIGE CONFIRMA  |\n");
                printf(" -----------------------------      ---------------------------\n");
                printf("Voto:");
                scanf(" %[^\n]s", &votoEstudantePresidente);

                if(strcmp(votoEstudantePresidente, numeroPresidente1)==0){
                        printf("\nVoto para presidente %s\n", presidente1);

                }else if(strcmp(votoEstudantePresidente, numeroPresidente2)==0){
                        printf("\nVoto para presidente %s\n", presidente2);

                }else if(strcmp(votoEstudantePresidente, "BRANCO")==0){
                        printf("\nVoto BRANCO para presidente\n");

                }else {
                        printf("\nVoto NULO para presidente\n");
                }

                printf("\nVoce deseja continuar com seu voto? Digite SIM para continuar ou digite CORRIGE para corrigir:");
                scanf(" %[^\n]s", &decisaoEstudantePresidente);

                if (strcmp(decisaoEstudantePresidente, "CORRIGE")==0){
                    printf("\nVoto corrigido! Vote novamente!\n");
                    goto corrigeSegundoVoto;

                }else{
                    if(strcmp(votoEstudantePresidente, numeroPresidente1)==0){
                        votoParaPresidente1++;

                    }else if(strcmp(votoEstudantePresidente, numeroPresidente2)==0){
                        votoParaPresidente2++;

                    }else if(strcmp(votoEstudantePresidente, "BRANCO")==0){
                        votoBrancoPresidente++;

                    }else {
                        votoNuloPresidente++;
                    }
                }
                system("pause");
                system("cls");
                printf("\n\tFIM\n\n");
                system("pause");
                system("cls");
                
                printf("\nDigite a senha de acesso para continuar a votação:");
                scanf("%d", &senha);
                system("cls");

                while(senha!=14995){
                    printf("\nSenha incorreta! Verifique e digite novamente:");
                    scanf("%d", &senha);
                    system("cls");
                }
            }
        }

        break;

        case 2:
         system("cls");	
         printf("Insira quantos estudantes irao votar:");
         scanf("%d", &quantidadeVotantes);
         system("cls");

        while(quantidadeVotantes<30){
              printf("\nO estatuto estudantil define que deverao participar no minimo 30 votantes.\nInsira novamente o total de participantes: ");
              scanf("%d", &quantidadeVotantes);

              system("cls");
          }if (quantidadeVotantes>=30){
              printf("\nNumero de votantes declarados com sucesso!\n\n");
              system("pause");
              system("cls");
          }
        break;

        case 3:
         system("cls");
         printf("\n\tRELATORIO DE VOTOS:\n");

         printf("Total de votantes: %d\n", quantidadeVotantes);
         printf("\n\tRepresentante Estudantil:\n");
         printf("Total de votos para %s: %d\n", representante1, votoParaRepresentante1);
         printf("Total de votos para %s: %d\n", representante2, votoParaRepresentante2);
         printf("Total de votos para %s: %d\n", representante3, votoParaRepresentante3);
         printf("Total de votos para %s: %d\n", representante4, votoParaRepresentante4);
         printf("Total de votos para %s: %d\n", representante5, votoParaRepresentante5);

         printf("\nTotal de votos BRANCOS para representante estudantil: %d\n", votoBrancoRepresentante);
         printf("Total de votos NULOS para representante estudantil: %d\n", votoNuloRepresentante);

         printf("\n\n\tPresidente do Gremio:\n");
         printf("Total de votos para %s com o numero %s: %d\n", presidente1, numeroPresidente1, votoParaPresidente1);
         printf("Total de votos para %s com o numero %s: %d\n", presidente2, numeroPresidente2, votoParaPresidente2);

         printf("\nTotal de votos BRANCOS para presidente do gremio: %d\n", votoBrancoPresidente);
         printf("Total de votos NULOS para presidente do gremio: %d\n\n", votoNuloPresidente);

         system("pause");
         system("cls");
         break;

        case 4:
       	 system("cls");
         printf("\n\tCADASTRO DE CANDIDATOS A REPRESENTANTE DO GREMIO:\n");

         printf("Insira o nome do 1° candidato a representante:");
         scanf(" %[^\n]s", &representante1);
         printf("Digite o numero da chapa do 1° candidato a representante:");
         scanf(" %[^\n]s", &numeroRepresentante1);

         printf("\nInsira o nome do 2° candidato a representante:");
         scanf(" %[^\n]s", &representante2);
         printf("Digite o numero da chapa do 2° candidato a representante:");
         scanf(" %[^\n]s", &numeroRepresentante2);

         printf("\nInsira o nome do 3° candidato a representante:");
         scanf(" %[^\n]s", &representante3);
         printf("Digite o numero da chapa do 3° candidato a representante:");
         scanf(" %[^\n]s", &numeroRepresentante3);

         printf("\nInsira o nome do 4° candidato a representante:");
         scanf(" %[^\n]s", &representante4);
         printf("Digite o numero da chapa do 4° candidato a representante:");
         scanf(" %[^\n]s", &numeroRepresentante4);

         printf("\nInsira o nome do 5° candidato a representante:");
         scanf(" %[^\n]s", &representante5);
         printf("Digite o numero da chapa do 5° candidato a representante:");
         scanf(" %[^\n]s", &numeroRepresentante5);

         system("cls");

         printf("\n\tCADASTRO DE CANDIDATOS A PRESIDENTE DO GREMIO\n");

         printf("\nInsira o nome do 1° candidato a presidente:");
         scanf(" %[^\n]s", &presidente1);
         printf("Digite o numero da chapa do 1° candidato a presidente:");
         scanf(" %[^\n]s", &numeroPresidente1);

         printf("\nInsira o nome do 2° candidato a presidente:");
         scanf(" %[^\n]s", &presidente2);
         printf("Digite o numero da chapa do 2° candidato a representante:");
         scanf(" %[^\n]s", &numeroPresidente2);

         system("cls");

         printf("\nCandidatos cadastrados com sucesso!\n");
         system("pause");
         system("cls");
         

        break;

        case 5:
  	     system("cls");
         printf("\nFinalizando a execucao do programa...\n");
         system("pause");

        break;

        default:
         system("cls");	
         printf("\nOpcao Invalida! Tente novamente\n");
         system("pause");
         system("cls");
        break;

     } 
    }while(op!=5);
    return(0);
}
