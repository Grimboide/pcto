#include <stdio.h>

int main()
{
    char parola[]={'p', 'r', 'o', 's', 'p', 'e', 't', 't', 'o', ' ', 's', 'i', 'n', 'o', 't', 't', 'i', 'c', 'o', '\0'};
    char parola1[]="chiasmo ascendente";
    parola1[5]='s';
    printf("la parola è %s\n", parola);
    printf("la parola è %s\n", parola1);
    return 0;
}