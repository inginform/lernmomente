/**
 *	Programm welches zeigt wie in die Ausgabe mit printf eine Zahl integriert werden kann.
 */

// printf ist Bestandteil der C-Standardbibliothek und kann über folgendes include 
// eingebunden werden
#include <stdio.h>

int main(void)
{
	int integerVariable;
	int negativerWert;
	float floatVariable;
	char zeichen;
	char text[] = "Ende des Beispiels!\n";

	printf("Im folgenden ein paar Ausgaben in die Werte aus Variablen eingefügt werden:\n\n");

	integerVariable = 100;
	printf("Der aktuelle Wert einer Integer Variable ist: %i. Auch danach kann noch Text kommen.\n", integerVariable);
	printf("Du kannst natürlich auch das %% Zeichen verwenden. Hier haben wir volle %i%%.\n\n", integerVariable);

	floatVariable = 3.141;
	printf("Pi mit den ersten 3 Nachkommastellen: %f. Allerdings ohne Formatierung der Nachkommastellen.\n", floatVariable);
	printf("Pi mit den ersten 3 Nachkommastellen: %.3f, und richtiger Formatierung.\n\n", floatVariable);

	negativerWert = -42;
	printf("Natürlich werden auch negative Werte ausgegeben: %i.\n", negativerWert);
	printf("Es sei denn du verwendest %%u, das sagt, dass die Zahl als vorzeichenlos behandelt werden soll: %u.\n\n", negativerWert);

	zeichen = 'L';
	printf("Wenn du magst, kannst du auch Zeichen ausgegeben: %c\n", zeichen);
	printf(text);

	return 0;
}
