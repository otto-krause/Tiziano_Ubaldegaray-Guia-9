#include <stdio.h>
#include <stdlib.h>

int main()
{
 int venta=0, I=0, promedio=0, total_ventas=0, suma=0, mayor=0;
 I=0;
    while (I<20) {
  printf("El vendedor %d vendio diariamente: ",I+1);
  scanf("%d", &venta);
  total_ventas=venta*15;
  suma=suma+total_ventas;
  printf(" El vendedor %d vendio en total: \n %d\n", I+1, total_ventas);
  if (mayor<venta){
   mayor=venta;
  }
  I++;
 }
 promedio=suma/20;
 printf("El promedio de ventas es de: \n%d\n", promedio);
 printf("El vendedor que mas vendio fue el que vendio: \n%d\n", mayor);
	
}