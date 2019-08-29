#include <stdio.h>
#include <stdlib.h>

/* incluir aqui a estruturas do TAD */
typedef struct Racional *pRacional;


/* operações do TAD */
pRacional criaRacional(long numerador, long denominador);
void destroiRacional(pRacional p);
long num(pRacional p);
long den(pRacional p);
pRacional somaRacional(pRacional a, pRacional b);
void reduzRacional(pRacional p);
char *mostraRacional(pRacional p);
