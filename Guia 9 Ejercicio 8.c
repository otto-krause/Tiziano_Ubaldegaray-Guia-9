#include <stdio.h>
#include <stdlib.h>

int main()
{
 int positivo=0, negativo=0, cero=0, I=0, numero=0;
 I=0;
 while(I<10){
  printf("Introduzca un numero entero: ");
  scanf("%d", &numero);
  if(numero>0)
  {
   positivo+=+1;
  }
  else {
     if (numero<0)
  {
      negativo+=+1;
  }
     else
      cero+=+1;
  }
  I++;
 }
 system("cls");
 printf("La cantidad de numeros positivos es: %d\n", positivo);
 printf("La cantidad de numeros negativos es: %d\n", negativo);
 printf("La cantidad de ceros es: %d\n", cero);
	
}