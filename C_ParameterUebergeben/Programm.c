#include <stdio.h>
#include <stdlib.h>

float BerechneKugelVolumen(float radius)
{
  float volumen;
  volumen = 1.333 * 3.141 * radius * radius * radius;

  radius = radius * 2;
  printf("Der Radius wurde innerhalb der Funktion verändert und ist jetzt: %f\n", radius);

  return volumen;
}

int main(void)
{ 
  float eingelesenerRadius, volumen;
  printf("Programm zur Berechnung des Volumens einer Kugel");
  printf("\n\nRadius der Kugel in cm: ");
  scanf("%f", &eingelesenerRadius);

  volumen = BerechneKugelVolumen(eingelesenerRadius);

  printf("Der eingelesene Radius im Hauptprogramm ist aber immer noch: %f\n", eingelesenerRadius);

  printf("\nDas berechnete Volumen: %f Kubikzentimeter\n", volumen);

  return EXIT_SUCCESS;
}
