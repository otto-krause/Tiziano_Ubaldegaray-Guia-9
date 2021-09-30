#include <stdio.h>
#include <stdlib.h>

int main()
{
 int base=0, exp=0, resultado=0, I=0;
 resultado=1;
 I=1;
 printf("Introduzca un numero de base: ");
 scanf("%d", &base);
 printf("Introduzca un numero de exponente: ");
 scanf("%d", &exp);
	
 while(I<=exp){
  resultado=resultado*base;
  I++;
 }
	
 printf("El numero es: \n%d\n", resultado);
	
}