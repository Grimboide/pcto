#include <stdio.h>

int main(){

int a;
int b;
int c;

printf("scrivi il tuo anno di nascita\n");
scanf("%d", &a);

b= a-1969;
c= 1969-a;

if(a>1969){
    printf("sei nato %d", b);
    printf(" anni dopo l'allunaggio\n");
}
else if(a<1969){
    printf("sei nato %d anni prima l'allunaggio", c);
}
else{
    printf("sei nato nell'anno dell'allunaggio\n");
}

return(0);
}