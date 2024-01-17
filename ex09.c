#include <stdio.h>

int main(){

float c;
float k;
float f;

printf("inserisci una temperatura in celsius\n");
scanf("%f", &c);

k= c + 273.15;
f= (9/5) * c + 32;

if(c>=-273,15)
{
    printf("la temperatura in kelvin è: %f\nla temperatura in fahrenheit è: %f\n", k, f);
}
return(0);
}