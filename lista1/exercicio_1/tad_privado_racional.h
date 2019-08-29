#include "tad_interface_racional.h"

/* estruturas privativas ao TAD */
typedef struct Racional {
    long num;
    long den;
} Racional;

/* operações privativas ao TAD */
long mdc(long a, long b);
