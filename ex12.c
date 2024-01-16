#include <stdio.h>

int main(){

float a;
float b;
float c;

printf("inserisci un numero\n");
scanf("%f", &a);

printf("de nuovo\n");
scanf("%f", &b);

printf("ancora un'altro\n");
scanf("%f", &c);

if(a+b>c){
    if(a+c>b){
        if(b+c>a){
            printf("questi numeri possono corrispondere ai lati di un triangolo\n");
        }
    else{
        printf("questi numeri ahime non corrispondono con i lati di nessun triangolo\n");
    }
    }
    else{
        printf("questi numeri ahime non corrispondono con i lati di nessun triangolo\n");
    }
}
else{
        printf("questi numeri ahime non corrispondono con i lati di nessun triangolo\n");
    }

return(0);
}