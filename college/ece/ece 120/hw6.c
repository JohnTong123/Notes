
#include <stdio.h>
int main()
{
    unsigned int a, b, c, d,e,k;
    unsigned int f;
    /* Print header for K-map. */
    printf("           yz \n");
    printf("      00 01 11 10 \n");
    printf(" ______________\n");
    /* row-printing loop */
    for (a = 0; 2 > a; a = a + 1) {
        for (k=0; 2>k; k=k+1){
            b=k^a;
            printf("wx=%u%u | ", a,b);
            /* Loop over input variable b in binary order. */
            for (c = 0; 2 > c; c = c + 1) {
            /* Loop over d in binary order.*/
                for (e = 0; 2 > e; e = e + 1) {
                    d=e^c;    
                    f= (1&(~a&~b))|(1&(~b&~c))|(1&(~c&d)|(1&(~a&~d))); 
                    // f= ((b|c))&(1&(~a | c | ~d));
                    printf(" %u",f);
                /* Use variables b and d to calculate *
                * input variable c (iterated in *
                * Gray code order). */
                /* CALCULATE c HERE. */
                /* Calculate and print one K-map entry *
                * (function F(a,b,c) ). */
                /* INSERT CODE HERE. */
                }
            }
            /* End of row reached: print a newline character. */
            printf("\n");
        }
    }
    return 0;
}