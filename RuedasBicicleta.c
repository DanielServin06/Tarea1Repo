#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
  int n;
  float r1, r2, r3, l; 
  printf("\nPor favor, introduzca el número de vueltas\n"); 
  scanf("\n %d",&n); 
  printf("\nAhora introduzca el valor de los radios\n"); 
  scanf("\n %f",&r1); 
  scanf("\n %f",&r2); 
  scanf("\n %f",&r3); 

  if(r3>r2 && r3>r2){
    l=((2.0*M_PI*n*r1)/r2)*r3; 
  printf("\nSu bicicleta ha recorrido: %f=l",l);
  }
  else{
    printf("El valor del radio de la rueda de bicicleta no debe ser menor que los radios de los engranes"); 
  }
  
  return 0;
}