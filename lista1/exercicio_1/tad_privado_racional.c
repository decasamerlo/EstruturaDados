/* implementações das operações privativas ao TAD */

long mdc(long a, long b) {
    long aux, r;
    if (a < b) {
        aux = a;
        a = b;
        b = aux;
    }
    while (b > 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
        
