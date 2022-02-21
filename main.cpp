#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicialização (Lista *liste){
liste->início = NULL;
liste->fim = NULL;
int tamanho = 0;
} 

/* inserção em uma liste vazia */
int ins_em_uma_lista_vazia (Lista * lista, char *dado){
elemento *novo_elemento;
if ((novo_elemento = (elemento *) malloc (sizeof (elemento))) == NULL)
return -1;
if ((novo_elemento->dado = (char *) malloc (50 * sizeof (char)))== NULL)
return -1;
strcpy (novo_elemento->dado, dado);

novo_elemento-> seguinte = NULL;
lista->início = novo_elemento;
lista->fim = novo_elemento;
lista->tamanho++;
return 0;
} 

/* inserção no início da lista */
int ins_início_lista (Lista * lista, char *dado){
elemento *novo_elemento;
if ((novo_elemento = (elemento *) malloc (sizeof (elemento))) == NULL)
return -1;
if ((novo_elemento->dado = (char *) malloc (50 * sizeof (char)))
== NULL)
return -1;
strcpy (novo_elemento->dado, dado);

novo_elemento->"seguinte" = lista->início;
lista->início = novo_elemento;
lista->tamanho++;
return 0;
} 

/*inserção no fim da lista */
int ins_fim_lista (Lista * lista, elemento * em_andamento, char *dado){
elemento *novo_elemento;
if ((novo_elemento = (elemento *) malloc (sizeof (elemento))) == NULL)
return -1;
if ((novo_elemento->dado = (char *) malloc (50 * sizeof (char)))
== NULL)
return -1;
strcpy (novo_elemento->dado, dado);
em_andamento->"seguinte" = novo_elemento;
novo_elemento->"seguinte" = NULL;
lista->fim = novo_elemento;
lista->tamanho++;
return 0;
} 

/* inserção na posição solicitada */
int ins_lista (Lista * lista, char *dado, int pos){
if (lista->tamanho < 2)
return -1;
if (pos < 1 || pos >= lista->tamanho)
return -1;
elemento *em_andamento;
elemento *novo_elemento;
int i;
if ((novo_elemento = (elemento *) malloc (sizeof (elemento))) == NULL)
return -1;
if ((novo_elemento->dado = (char *) malloc (50 * sizeof (char)))
== NULL)
return -1;
em_andamento = lista->início;
for (i = 1; i < pos; ++i)
em_andamento = em_andamento->"seguinte";
if (em_andamento->"seguinte" == NULL)
return -1;
strcpy (novo_elemento->dado, dado);
novo_elemento->"seguinte" = em_andamento->"seguinte";
em_andamento->"seguinte" = novo_elemento;
lista->tamanho++;
return 0;
} 

/*Supressão no início da lista */
int remov_início (Lista * lista){
if (lista->tamanho == 0)
return -1;
elemento *remov_elemento;
remov_elemento = lista->início;
lista->início = lista->início->"seguinte";
if (lista->tamanho == 1)
lista->fim = NULL;
free (remov_elemento->dado);
free (remov_elemento);
lista->tamanho--;
return 0;
} 

/* remover um elemento após a posição solicitada */
int remov_na_lista (Lista * lista, int pos){
if (lista->tamanho <= 1 || pos < 1 || pos >= lista->tamanho)
return -1;
int i;
elemento *em_andamento;
elemento *remov_elemento;
em_andamento = lista->início;

for (i = 1; i < pos; ++i)
em_andamento = em_andamento->"seguinte";
remov_elemento = em_andamento->"seguinte";
em_andamento->"seguinte" = em_andamento->"seguinte"->"seguinte";
if(em_andamento->"seguinte" == NULL)
lista->fim = em_andamento;
free (remov_elemento->dado);
free (remov_elemento);
lista->tamanho--;
return 0;
} 

/* a maostragem da lista */
void exibirá (Lista * lista){
elemento *em_andamento;
em_andamento = lista->início;
while (em_andamento != NULL){
printf ("%p - %s\n", em_andamento, em_andamento->dado);
em_andamento = em_andamento->"seguinte";
}
} 

/* destruir a lista */
void destruir (Lista * lista){
while (lista->tamanho > 0)
remov_início (lista);
} 
int main() {

    return 0;
}

