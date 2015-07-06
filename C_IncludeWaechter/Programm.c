#include <stdio.h>
#include <stdlib.h>

//#include "Ohne.h"
#include "Guard.h"
#include "Pragma.h"

int main(void)
{ 
  printf("\nLernmoment für Include Guard!\n");

  printf("\nEs gibt 3 Header in diesem Beispiel.\n");
  printf("Wenn du die Kommentarzeichen an der Zeile #include Ohne.h entfernst, wird es einen Fehler beim kompilieren geben.\n");

  return EXIT_SUCCESS;
}
