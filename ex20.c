#include <stdio.h>

float sqrtu(float delta)
{
    float temp, radice;

    radice = delta / 2;
    temp = 0;

    while( radice != temp){
        temp = radice;
        radice = ( delta / temp + temp) / 2;
    }
    return radice;
}

int main()
{
    int a;
    int b;
    int c;
    int x1;
    int x2;
    int delta;

    printf("ao inserisci tre numeri\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    delta = ( b * b ) - 4 * ( a * c );
    if( delta > 0 ){
        x1 = ( - b + sqrtu(delta))/2*a;
        x2 = ( - b - sqrtu(delta))/2*a;
        printf("i valori delle x sono x1: %d e x2: %d\n", x1, x2);
    }
    else if( delta < 0 ){
        printf("l'equazione non emette soluzioni reali\n");
    }
    else{
        x1 = x2 = b/2*a;
        printf("i valori delle x sono x1: %d e x2: %d\n", x1, x2);
    }
return(0);
}