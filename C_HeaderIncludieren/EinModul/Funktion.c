/**
 *  Diese Quelldatei liegt in einem Verzeichnis zusammen mit dem dazugehörigen Header.
 *  Du könntest diese Datei eigenständig als Bibliothek übersetzen. Dazu rufst du einfach
 *  den GCC mit folgendem Kommando auf: gcc -c Funktion.c
 *
 *  Die Option -c sagt dem Compiler, dass er nur übersetzen soll und kein Hauptprogramm
 *  erwarten muss. Die erzeugte Datei Funktion.o kannst du nicht direkt ausführen, aber
 *  später mit dem Hauptprogramm zusammen linken.
 */

// Da der Header selbst erstellt ist und im gleichen Verzeichnis liegt, verwende ich hier Anführungszeichen.
#include "Funktion.h"

// Der folgenden Header gehört zur C-Standardbibliothek. Daher werden hier spitze Klammern verwendet. So
// brauch der Compiler nicht erst lokal danach suchen.
#include <stdio.h>

void EineTolleFunktion(void)
{
	printf("Hallo aus EineTolleFunktion! Diese Ausgabe kommt aus EinModul/Funktion.c\n");
}
