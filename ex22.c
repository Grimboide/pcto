#include <stdio.h>

int main()
{
    int x;
    int y;
    int a;

    printf("scrivi due numeri\n");
    scanf("%d", &x);
    scanf("%d", &y);

    printf("indica il tipo di calcolo che vuoi eseguire tra i due numeri\n1: somma\n2: sottrazione\n3: moltiplicazione\n4: divisione\n");
    scanf("%d", &a);
    if(a==1){
        a= x + y;
        printf("x + y = %d\n", a);
    }
    else if(a==2){
        a= x - y;
        printf("x - y = %d\n", a);
    }
    else if(a==3){
        a= x * y;
        printf("x * y = %d\n", a);
    }
    else if(a==4){
        a= x / y;
        printf("x / y = %d\n", a);
    }
return 0;
}