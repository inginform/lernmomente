#include <stdio.h>

int main(void)
{ 
  float radius, volumen;
  printf("Programm zur Berechnung des Volumens einer Kugel");
  printf("\n\nRadius der Kugel in cm: ");
  scanf("%f",&radius);
  volumen = 1.333 * 3.141 * radius * radius * radius;
  printf("Volumen: %f Kubikzentimeter\n", volumen);
  return 0;
}
