#include <stdio.h>

int main(){

int etàpatente;
int età;

printf("a quale età si può prendere la patente nel tuo paese?\n");
scanf("%d", &etàpatente);

printf("quanti anni hai?\n");
scanf("%d", &età);
if(età>=etàpatente){
    printf("puoi prendere la patente\n");
}
else if(età<etàpatente){
    printf("non puoi prendere la patente\n");
}

return(0);
}