#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ElementoLista vai se chamar Pelemento
//seguinte vai se chamar prox
// dado vai se chamar arquivo
//inicio vai ser primeiro
//fim vai ser ultimo
// Lista detectada vai ser Pos_elemen
//liste vai ser posicao

typedef struct ElementoLista {
char *dado;
struct ElementoLista *seguinte;
}elemento; 




typedef struct ListaDetectada {
elemento *início;
elemento *fim;
int tamanho;
}Lista; 

void inicialização (Lista *lista);

int ins_na_lista_vazia (Lista *lista, char *dado);

int ins_inicio_lista (Lista *lista,char *dado);

int ins_fim_lista (Lista *lista, elemento *em_andamento, char *dado);

int ins_lista (Lista *lista, char *dado,int pos);

int remov_início (Lista *lista);

int remov_na_lista (Lista *lista, int pos);






