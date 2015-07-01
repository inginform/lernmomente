
// Da der Header selbst erstellt ist und im gleichen Verzeichnis liegt, verwende ich hier Anführungszeichen.
#include "AndereFunktion.h"

// Der folgenden Header gehört zur C-Standardbibliothek. Daher werden hier spitze Klammern verwendet. So
// brauch der Compiler nicht erst lokal danach suchen.
#include <stdio.h>

void EineFunktion(void)
{
	printf("Hallo aus EineFunktion! Diese Ausgabe kommt aus AndereFunktion.c\n");
}

