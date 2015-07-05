#Lernmoment in C - Programme beenden, kennst du den Mythos um return 0

Hast du dich schon mal gefragt warum dein Hauptprogramm, also die `main` Funktion, einen Integer Wert zurück gibt? Wenn ja, weisst du auch welchen Wert du zurück geben solltest? Musst du überhaupt einen Wert zurückgeben?

Fangen wir erstmal mit einem einfachen "Hallo Welt" an:

```c
#include <stdio.h>

int main (void)
{
  printf("\nHallo Welt!\n");
}
```

Dies ist vermutlich eines der einfachsten C-Programme überhaupt. Doch wenn du es dir genau anschaust, wirst du eine Inkonsistenz sehen. In diesem Programm wird definiert, dass `main` einen Rückgabewert vom Typ `int` hat. Aber siehst du eine `return` Anweisung?

Dies Programm ist tatsächlich konform mit den C-Sprachstandards ISO/IEC 9899:1999 (Kurzform: C99) und ISO/IEC 9899:2011 (Kurzform: C11). Du siehst, es gibt verschiedene Versionen, weil im Laufe der Jahre der Sprachumfang von C immer erweitert wurde. Vor C99 gab es weitere Versionen, aber in denen wurde festgelegt, dass `main` immer mit einem `return` gefolgt von einer Ganzzahl beendet werden muss.

Wenn du das obige Programm mit einem aktuellen Compiler übersetzt (z.B. gcc in Version 4.9 oder Visual Studio 2013), wirst du keine Fehler bekommen. Die Compiler fügen in diesem Fall, keine `return` Anweisung am Ende von `main`, automatisch ein `return 0;` ein.

Was aber besagt das denn nun? Die Zahl die durch die `return` Anweisung in `main` zurück gegeben wird, wird an das Betriebssystem weitergeleitet. Mit dieser Zahl kannst du dem Betriebssystem sagen, ob dein Programm erfolgreich beendet wurde (`return 0;`) oder nicht (`return 1;`). Dabei ist es in sehr vielen Fällen egal, ob das Betriebssystem weiß, dass es einen Fehler gab oder nicht. So in dem Beispiel oben.

Es gibt aber auch Fälle, in denen es durchaus relevant ist ob in einem Programm ein Fehler aufgetreten ist, oder nicht. Wenn zum Beispiel dein Programm zusammen mit anderen Programmen eine größere Aufgaben erledigt. Dann kann bei einem Fehler von einem der Programme entschieden werden, ob die ganze Bearbeitung abgebrochen werden soll.

Somit sollte dir nun bewusst sein, dass wenn du nichts machst (siehe Beispiel oben), dann sagt dein Programm immer, dass es erfolgreich beendet wurde. Zum Abschluss möchte ich dir noch eine weitere Alternative zeigen. In der `<stdlib.h>` sind die Konstanten `EXIT_SUCCESS` und `EXIT_FAILURE` definiert. 

Es gibt verschiedene Gründe warum diese Konstanten verwendet werden sollten, oder eben auch nicht. Aus meiner Sicht sind sie allerdings gerade für Anfänger gut, weil du so ganz explizit im Quellcode sehen kannst wie dein Programm beendet wird.

Jetzt erstmal viel Spaß beim ausprobieren.

Jan

**Merke:**

-	Mit aktuellen Compilern braucht deine `main` Funktion gar keinen Wert zurückgeben.
-	Wenn deine `main` Funktion keinen Wert zurück gibt, fügt der Compiler immer ein `return 0;` ein.
-	`return 0;` und `return EXIT_SUCCESS;` bedeuten beide, dass dein Programm erfolgreich beendet wurde.
-	`return 1;` und `return EXIT_FAILURE;` bedeuten beide, dass dein Programm mit einem Fehler beendet wurde.
-	Es gibt sehr unterschiedliche Meinungen über das `return` in einer `main` Funktion. Wichtig ist, dass dir klar ist, was dein Programm macht.

**Lernquiz:** Verwende folgende Fragen um das gelernte von heute zu festigen:

-	Für wen ist der Rückgabewert der `main` Funktion relevant?
-	Mit welcher Anweisung kannst du sagen, dass dein Programm **nicht** erfolgreich beendet wurde?
-	Wie heißen die Konstanten, die du anstelle von `0` und `1` verwenden kannst?

Am besten du schaust dir morgen und dann nochmal in ein paar Tagen die vorherigen Fragen an und beantwortest sie ohne den Text vorher gelesen zu haben.

**Weitere Informationen:** 

-	Den kompletten Quellcode zum heutigen Lernmoment findest du [hier](https://github.com/inginform/lernmomente/tree/master/C_ProgrammBeenden). 
-	Einen kleinen Hinweis wie du den Rückgabewert in deinem Betriesbsystem benutzt gibt es [hier](https://de.wikibooks.org/wiki/C-Programmierung:_Funktionen#exit.28.29)
