#include "tad_interface_racional.h"

/* estruturas privativas ao TAD */
typedef struct Racional {
    long num;
    long den;
} Racional;

/* opera��es privativas ao TAD */
long mdc(long a, long b);
