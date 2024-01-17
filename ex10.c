#include <stdio.h>

int main(){

float a;
float b;
float c;

printf("ao porcaccio er pupone scrivi un numero\n");
scanf("%f", &a);
printf("ao e scrivine un altro oppure bombardo il bambin gesù\n");
scanf("%f", &b);
printf("ao ne voglio un'altro oppure piazzo una bomba ad acilia\n");
scanf("%f", &c);
if((a-b)==(b-c)){
    printf("ao ma sti numeri formano na sequenza perfetta damme n'bacetto\n");
}
else if((a-b)!=(b-c)){
    printf("ao ma che sei er lucertola ao ma questi numeri non sono in successione\n");
}
return(0);
}