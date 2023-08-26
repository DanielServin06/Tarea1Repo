#include <stdio.h>
#include <stdlib.h>

int main(void){

  float TempCelsius, TempFahrenheit;
  printf("\nIntroduzca el valor de la temperatura medida en °Celsius\n"); 
  scanf("\n %f",&TempCelsius); 

  TempFahrenheit=9/5.0*TempCelsius+32; 
  
  printf("\n%f=TempFahrenheit\n ", TempFahrenheit); 
  
  return 0;
}