#include "aplicacao.h"

/* Aplicação de teste */

int main()
{
    pRacional a, b, c;

    a = criaRacional(4, 3);
    b = criaRacional(5, 3);
    
    c = somaRacional(a, b);
    
    printf("%s + %s = %s\n", mostraRacional(a), mostraRacional(b), mostraRacional(c));

    destroiRacional(a);
    destroiRacional(b);
    destroiRacional(c);

    /* getch(); */
    return 0;
}
