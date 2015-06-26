#include <stdio.h>

float BerechneKugelVolumen(float radius)
{
  float volumen;
  // TODO: erklären warum 1.333 und nicht 3/4
  // TODO: wie geht radius hoch 3
  volumen = 1.333 * 3.141 * radius * radius * radius;
  return volumen;
}

int main(void)
{ 
  float radius;
  printf("Programm zur Berechnung des Volumens einer Kugel");
  printf("\n\nRadius der Kugel in cm: ");
  scanf("%f",&radius);
  printf("Volumen: %f Kubikzentimeter\n", BerechneKugelVolumen(radius));
  return 0;
}
