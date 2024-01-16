#include <stdio.h>

int main(){

int a;
int b;

printf("scrivi un numero intero\n");
scanf("%d", &a);

printf("scrvi nuovamente un numero intero\n");
scanf("%d", &b);
if(a%b==0){
    printf("il primo numero è multiplo del secondo\n");
}
else if(a%b>0){
    printf("il primo numero non è multiplo del secondo\n");
}

return(0);
}