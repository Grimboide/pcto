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
    else if(lettera=='b' || lettera=='c' || lettera=='d' || lettera=='f' || lettera=='g' || lettera=='h' || lettera=='l' || lettera=='m' || lettera=='n' || lettera=='p' || lettera=='q' || lettera=='r' || lettera=='s' || lettera=='t' || lettera=='v' || lettera=='z')
        {
        printf("è tutta consonante sta letterina papà è buono\n");
    }
    else{
        printf("hai inserito un carattere errato\n");
    }
return 0;
}