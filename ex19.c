#include <stdio.h>

int main(){

int n = 0;
int m;
int d = 0;

    while( n >= 0 )
    {
        d = d + 1;
        printf("inserisci un altro numero\n");
        scanf("%d", &n);
        n = n + n;
        m = n / d;
        printf("la media dei numeri inseriti è: %d\n", m);
    }

return(0);
}