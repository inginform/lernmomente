#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  FILE *datenstrom;
  int antwortAufAlleFragen = 42;

  printf("\nBeispielprogramm von Lernmoment.de. Zeigt wie CSV-Dateien beschrieben werden.\n");

  datenstrom = fopen("lernmoment.csv", "w");

  if (datenstrom == NULL)
  {
    printf("Die Datei konnte nicht geöffnet werden!");
    return EXIT_FAILURE;
  }

  // ich verwende ein Semikolon als Trennzeichen und nicht ein Komma. Dies kommt daher, weil in meinen Daten ein
  // Komma enthalten ist. Da eine CSV Datei nicht genormt ist, gibt es hier viele verschiedene Möglichkeiten und
  // Lösungen. Die meisten Programm erlauben die Auswahl des Trennzeichens. Somit kannst du einfach auf ein anderes
  // Trennzeichen ausweichen, wenn deine Daten gerade das übliche Trennzeichen verwenden.
  fprintf(datenstrom, "Frage; Antwort\n");
  fprintf(datenstrom, "Was ist die Antwort auf die Frage nach dem Leben, dem Universum und dem ganzen Rest?; %i\n", antwortAufAlleFragen);
  fprintf(datenstrom, "Wie fandest du diesen Lernmoment?; Super :-)!\n");
  fclose(datenstrom);

  printf("Glückwunsch! Du hast gerade erfolgreich eine CSV Datei erstellt. Schau sie dir doch mal mit Excel oder Numbers an.\n");

  return EXIT_SUCCESS;
}
