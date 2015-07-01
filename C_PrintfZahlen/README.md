#Lernmoment in C - Printf mit Zahlen, wie du den Wert einer Variable ausgibst

Die Funktion `printf` kann dir in vielen Fällen helfen. In ihrer einfachsten Form, kannst du sie verwenden um einen statischen Text auszugeben:

```c
#include <stdio.h>

int main(void)
{
	char text[] = "Ein weiterer Text zum ausgeben.";

    printf("Diese Zeile druckt diesen statischen Text.");
    printf(text);

    return 0;
}
```

Sie bietet dir aber wesentlich mehr. Du kannst zum Beispiel den Inhalt einer Variablen ausgeben lassen. Dabei kannst du den Wert an beliebiger Stelle in den Text integrieren. Dazu kannst du printf einen Parameter übergeben:

```c
int dieAntwort = 42;
printf("Die Variable hat den Wert: %i", dieAntwort);
```

Über Umwandlungsangaben, welche mit dem %-Zeichen eingeleitet werden, kannst du angeben, wo der Wert einer Variablen eingesetzt werden soll. Die Variable musst du dann nach dem Text durch ein Komma getrennt mit angeben.

Wichtig ist, dass die Umwandlungsangaben den passenden Typ angeben. Wenn du eine Gleitkommazahl hast (also `float`) und verwendest `%i` im printf, dann wird das Resultat nicht das sein welches du erwartest. Probier es doch einfach mal mit dem [Beispielprogramm](https://github.com/inginform/lernmomente/tree/master/C_PrintfZahlen) aus. Die wichtigsten Umwandlungsangaben sind:

|Umwandlungsangabe| Datentyp          |
|-----------------|:------------------|
| %i              | int               |
| %d              | int               |
| %f              | float oder double |
| %c              | char              |
| %u              | unsigned int      |

Grundsätzlich aufpassen solltest du bei der Länge des Textes. Je nach Betriebssystem kann es passieren, dass die maximale Länge des resultierenden Textes, also mit den Zahlen, begrenzt ist. Insbesondere bei Mikrocontroller kann dies passieren, wenn printf dort überhaupt untertstützt wird. Es soll Unix-Varianten geben, die maximal 509 Zeichen zu lassen. Dies ist üblicherweise kein Problem, aber du solltest es wissen.

Es gibt noch eine Menge weiterer Formatierungsoptionen. Zum Beispiel kannst du mit `%.3f` angeben, dass dein float Wert mit 3 Nachkommastellen ausgegeben werden soll. Einige weitere Optionen habe ich im Beispielprogramm für diesen Lernmoment verwendet.

**Merke:**

-	`printf` kann Werte in einen Text integrieren, der dann ausgegeben wird.
-	Wichtig ist die passenden Umwandlungsangaben zum Datentyp zu verwenden.
-	Die Umwandlungsangabe wird an der gewünschten Stelle in den Text geschrieben.
-	Die Variable deren Wert in den Text eingesetzt werden soll, folgt nach dem Text. Dazwischen gehört ein Kommata.

**Lernquiz:** Verwende folgende Fragen um das gelernte von heute zu festigen:

-	Mit welchem Zeichen werden Umwandlungsangaben gestartet?
-	Was fügst du in einen Text ein, wenn du den Wert einer int-Variablen ausgeben möchtest?
-	Wie ist die Umwandlungsangabe für eine Variable vom Typ double bei der nur 2 Nachkommastellen ausgegeben werden sollen?

Am besten du schaust dir morgen und dann nochmal in ein paar Tagen die vorherigen Fragen an und beantwortest sie ohne den Text vorher gelesen zu haben.

**Weitere Informationen:** Den kompletten Quellcode zum heutigen Lernmoment findest du [hier](https://github.com/inginform/lernmomente/tree/master/C_PrintfZahlen). Eine umfangreichere Erklärung gibt es bei [wikibooks](https://de.wikibooks.org/wiki/C-Programmierung:_Einfache_Ein-_und_Ausgabe#printf).
