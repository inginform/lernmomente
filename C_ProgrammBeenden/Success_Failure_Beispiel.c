/**
 *  Dieses Programm kannst du zum Beispiel mit 'gcc Success_Failure_Beispiel.c' kompilieren.
 *
 *  Wenn du gcc mit einer zusätzlichen Option aufrufst: 'gcc -Wall Success_Failure_Beispiel.c',
 *  gibt es hier keine Warnung, weil alle Wege aus dem Programm einen Wert zurück geben.
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  char auswahl;

  printf("\nWie möchtest du dieses Programm beenden? Gebe einen Buchstaben ein:\n");
  printf("e - Erfolgreich (EXIT_SUCCESS)\n");
  printf("f - Fehler (EXIT_FAILURE)\n");

  scanf("%c", &auswahl);

  if (auswahl == 'f')
  {
  	printf("Okay, dann beenden wir das Programm mit einem Fehler (EXIT_FAILURE). Tschüss!\n");
  	return EXIT_FAILURE;
  }
  else if (auswahl == 'e')
  {
  	printf("Gut, dann beenden wir das Programm Erfolgreich (EXIT_SUCCESS). Bye bye!\n");
  }
  else
  {
  	printf("Deine Eingabe habe ich nicht verstanden. Trotzdem beende ich Erfolgreich. Auf Wiedersehen!\n");
  }

  return EXIT_SUCCESS;
}
