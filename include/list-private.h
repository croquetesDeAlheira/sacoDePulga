/*
Grupo 12
Daniel Santos
Luís Costa 47082
Marcus Dias
*/

#ifndef _LIST_PRIVATE_H
#define _LIST_PRIVATE_H

#include "entry.h"
#include "list.h"

/*
* struct node_t
* Estrutura que representa um no
* contendo um par {chave, valor} e
* o no seguinte 
*/
struct node_t{
	struct entry_t *value;
	struct node_t *next;
};

/*
* struct list_t
* Estrutura que representa uma lista ligada de nos
* Esta estrutura guarda o numero de nos
* bem como o no que se encontra
* na cabeça da lista
*/
struct list_t{
	struct node_t *head;
	int size;
};

/*
 * Adiciona o novo par {chave, valor} à lista ordenadamente
 * Caso a chave já exista substitui o valor
 */
int sortList(struct list_t *list, struct node_t *newNode);


/* Destroi uma estrutura node_t
 * libertando a memória necessária 
 */
void node_destroy(struct node_t *toDelete);

/*
 * Cria uma estrutura node_t
 * a partir do parametro passado
 * par {chave, valor}
 * em caso de erro retorna NULL
 */
struct node_t *node_create(struct entry_t *value);

/*
* Função usada para comparar duas estruturas node_t
*/
int compare(const void *l1 , const void *l2);

#endif
