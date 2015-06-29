/**
 *  In dieser Version wird die Funktion direkt aufgerufen und der Rückgabewert wird nicht erst
 *  in eine Variable gespeichert. Es hat den Vorteil, dass eine Variable weniger benötigt wird
 *  und eine Zeile Quellcode gespart wird.
 *  Dafür finde ich, dass es wesentlich schlechter zu lesen ist, weil der Funktionsaufruf als
 *  Teil der printf Anweisung nicht sehr auffällt.
 */

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
  // nachfolgend wird die Funktion direkt aufgerufen ohne eine Zuweisung
  printf("Volumen: %f Kubikzentimeter\n", BerechneKugelVolumen(radius));
  return 0;
}
