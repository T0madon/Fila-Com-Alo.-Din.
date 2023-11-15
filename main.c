#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x=0, opcoes, valor;

    while(x==0){

         printf("\n*****MENU*****\P05\nEscolha uma das opcoes:\n1 - Inserir valor\n2 - Remove valor\n3 - Inicio Fila\n4 - Vazia\n5 - Imprime Fila\n6 - Sair\n");
         scanf("%d", &opcoes);

         switch(opcoes){

            case 1:
                printf("Digite um valor a ser inserido na fila: ");
                scanf("%d", &valor);
                insereFila(valor);
                system("pause");
                system("cls");
                break;

            case 2:
                removeFila(valor);
                system("pause");
                system("cls");
                break;

            case 3:
                inicioFila();
                system("pause");
                system("cls");
                break;

            case 4:
                vazia();
                system("pause");
                system("cls");
                break;

            case 5:
                imprime();
                system("pause");
                system("cls");
                break;

            case 6:
                x=1;
                break;

            default:
                printf("O valor digitado nao e valido! Tente novamente\n");
                system("pause");
                system("cls");
         }
    }
    return 0;
}
