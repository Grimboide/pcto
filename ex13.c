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

if(a==b){
    if(a==c){
        if(b==c){
printf("aooooo ma sto triangolo è tutto equilatero\n");
}}}
else if(a==b){
    else if(b!=c){
    printf("ma quanto è isoscele questo triangolo papà è buono\n");
}}
else if(c==b){
    else if(b!=a){
    printf("ma quanto è isoscele questo triangolo papà è buono\n");
}}
else if(a==c){
    else if(b!=c){
    printf("ma quanto è isoscele questo triangolo papà è buono\n");
}}
else if(a!=b){
    else if(b!=c){
    printf("ma sto triangolo è tutto storto :o .... ma è uno scaleno (°o°)\n");
}}
return(0);

}