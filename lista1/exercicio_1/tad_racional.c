#include "tad_privado_racional.h"

/* implementações das operações do TAD */

pRacional criaRacional(long numerador, long denominador) {
    pRacional p=NULL;
    p = (Racional *) malloc(sizeof(Racional));
    if (denominador != 0 && p !=NULL) {
        p->num = numerador;
        p->den = denominador;
    }
    reduzRacional(p);
    return p;
}
void destroiRacional(pRacional p) {
    free(p);
}
long num(pRacional p) {
	return p->num;
}
long den(pRacional p) {
	return p->den;
}
pRacional somaRacional(pRacional a, pRacional b) {
    return criaRacional( num(a) * den(b) + num(b) * den(a), den(a) * den(b) );
}
void reduzRacional(pRacional p) {
    long m;
    m = mdc(num(p), den(p));
    p->num = p->num / m;
    p->den = p->den / m;
}
char *mostraRacional(pRacional p) {
	char *txt = (char *) malloc(100*sizeof(char));
	if (den(p) == 1)
		sprintf(txt, "%ld", num(p));
	else
		sprintf(txt, "%ld/%ld", num(p), den(p));
    return txt;
}
