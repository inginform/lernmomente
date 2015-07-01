/**
 *	Dieses Programm zeigt die beiden Varianten wie Header eingebunden werden können. Dazu
 *	werden entweder Anführungszeichen verwendet, dann wird im aktuellen Verzeichnis und im
 *	Includepfad nach dem Header gesucht. Oder es werden spitze Klammern verwendet, dann
 *	wird nur im Includepfad gesucht.
 *
 *	Das Programm kannst du mit folgendem Kommando übersetzen: gcc EinModul/*.c *.c
 */

// Da der Header selbst erstellt ist und im gleichen Verzeichnis liegt, verwende ich hier Anführungszeichen.
#include "AndereFunktion.h"

// Der folgende Header ist selbst erstellt und liegt in einem Unterverzeichnis. Also verwende ich 
// Anführungszeichen und den Namen des Unterverzeichnisses.
#include "EinModul/Funktion.h"

// Wenn du einen Header einbinden willst, der im Includepfad ist, dann verwendest du am besten die
// spitzen Klammern. Du könntest auch Anführungszeichen nehmen, aber dann wird der Präprozessor
// erst lokal suchen.
#include <stdio.h>

int main(void)
{
	printf("Dieses Programm zeigt unterschiedliche Varianten wie Header eingebunden werden können.\n");

	// die Funktion aus AndereFunktion.h aufrufen
	EineFunktion();

	// Die Funktion aus EinModul/Funktion.h aufrufen
	EineTolleFunktion();

	// das war es auch schon. Bis zum nächsten Lernmoment ;-)!
	return 0;
}