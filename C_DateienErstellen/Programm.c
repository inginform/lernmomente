#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  FILE *datenstrom;
  int anzahlZeichenGeschrieben = 0;

  printf("\nBeispielprogramm von Lernmoment.de. Zeigt wie Dateien geöffnet und beschrieben werden.\n");

  // Öffnen der Datei im Schreibmodus.
  // Bei "w" wird der Inhalt der Datei gelöscht, wenn sie existiert, oder sie wird erstellt, 
  // wenn sie nicht existiert.
  datenstrom = fopen("lernmoment.txt", "w");

  // Überprüfen ob die Datei geöffnet werden konnte. Vielleicht besteht die Datei schon mit einem
  // Schreibschutz, oder der Aufrufer hat keine Berechtigung um die Datei zu erstellen.
  if (datenstrom == NULL)
  {
    printf("Die Datei konnte nicht geöffnet werden!");
    return EXIT_FAILURE;
  }

  // Nun kann etwas in die Datei geschrieben werden. Erst wird der Inhalt von fprintf in einen
  // Zwischenspeicher geschrieben. Erst wenn die Datei geschlossen wurde (fclose), ist der
  // Inhalt auch wirklich drin.
  anzahlZeichenGeschrieben = fprintf(datenstrom, "Lernmoment - Dateien erstellen. Geschafft!\n");
  fclose(datenstrom);

  if (anzahlZeichenGeschrieben > 0)
  {
	printf("Glückwunsch! Du hast gerade erfolgreich %i Zeichen in die Datei geschrieben.\n", anzahlZeichenGeschrieben);
  }

  return EXIT_SUCCESS;
}