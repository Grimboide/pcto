#include <stdio.h>

int main()
{
    char lettera;
    char a='a';
    char e='e';
    char i='i';
    char o='o';
    char u='u';

    printf("inserisci una lettera\n");
    scanf("%c", &lettera);
    if(lettera==a || lettera==e || lettera==i || lettera==o || lettera==u){
        printf("aoaoao sta lettera è na vocale\n");
    }
    else{
        printf("è tutta consonante sta letterina papà è buono\n");
    }
return 0;
}