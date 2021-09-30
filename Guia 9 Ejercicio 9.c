#include <stdio.h>
#include <stdlib.h>

int main()
{
 int mayora=0, menora=0, I=0, sueldo=0, exacto=0;
 I=0;
 while(I<20) {
  printf("Introduzca el sueldo de la persona nro%d : ", I+1);
  scanf("%d", &sueldo);
  if(sueldo>2000)
  {
   mayora+=+1;
  }
  else
  {
     if (sueldo<2000)
      {
      menora+=+1;
   }
     else
      {
      exacto+=+1;
      }
  }
  I++;
 }
 system("cls");
 printf("La cantidad de personas que cobran mas de 2000 pesos son: %d\n", mayora);
 printf("La cantidad de personas que cobran menos de 2000 pesos son: %d\n", menora);
 printf("La cantidad de personas que cobran 2000 pesos exactos son: %d\n", exacto);

}
