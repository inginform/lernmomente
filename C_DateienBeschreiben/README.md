#Lernmoment in C - Dateien beschreiben, wie du einfach deinen Inhalt in eine Datei schreibst

Im vorherigen Lernmoment habe ich dir gezeigt, wie du einen Datenstrom erstellst in dem du eine Datei öffnest. Das ist sicherlich schon mal ganz cool. Heute wird es aber noch viel besser. Innerhalb weniger Minuten hast du Text und den aktuellen Wert von Variablen in die Datei geschrieben. Los geht`s!

Die Funktion deines vertrauens für das schreiben in eine Datei sollte `fprintf` werden. Sie funktioniert fast genauso wie `printf`. Du kannst sie ebenfalls über `#include <stdio.h>` einbinden.

Schauen wir uns ein einfaches Beispiel an:

```c
int anzahlZeichenGeschrieben = 0;
anzahlZeichenGeschrieben = fprintf(datenstrom, "Lernmoment - Dateien beschreiben. Geschafft!\n");
```

Ich habe in dem Beispiel oben die richtige Verwendung von `fopen` weggelassen. Dies kannst du dir wie immer im Beispielprogramm ansehen.

Wie du siehst, kannst du mit `fprintf` einen statischen Text einfach in die Datei schreiben. Dies geht fast genauso wie bei `printf`. Der einzige Unterschied ist, dass du als ersten Parameter den Datenstrom angeben musst. Dies ist ein Zeiger auf eine Struktur vom Type `FILE` und wird mit `fopen` erstellt (siehe [Lernmoment in C - Dateien erstellen](http://www.inginform.de/lernmoment-in-c-dateien-erstellen/)).

Die Syntax der nachfolgenden Parameter in `fprintf` ist exakt gleich zu denen bei `printf`. Du kannst also beispielsweise den Inhalt einer Integer Variablen so in die Datei schreiben:

```c
int dieAntwort = 42;
fprintf(datenstrom, "Was ist die Frage zu folgender Antwort? %i\n", dieAntwort);
```

Weitere Details zur Ausgabe anderer Datentypen und mehr Formatierungsoptionen, kannst du im [Lernmoment in C - printf mit Zahlen](http://www.inginform.de/lernmoment-in-c-printf-mit-zahlen/) nachlesen.

Wie du siehst, habe ich in einem Beispiel den Rückgabewert von `fprintf` verwendet und in dem anderen nicht. Der Rückgabewert beinhaltet die Anzahl der geschriebenen Zeichen, wenn alles gut gegangen ist. Ist ein Fehler aufgetreten, dann ist der Rückgabewert negativ. In vielen Fällen wird die Auswertung des Rückgabewerts nicht gemacht. Damit läufst du aber Gefahr, dass deine Daten nicht in der Datei stehen und du es gar nicht gemerkt hast.

Im Quellcode zu diesem Lernmoment zeige ich dir auch, wie einfach es ist eine CSV-Datei (Comma-Separated Values) zu erstellen. Diese kannst du zum Beispiel einfach in Excel importieren. Das kann häufig eine schnelle und einfache Möglichkeit sein um dein Programm, oder ein Protokoll zu analysieren.

Jetzt erstmal viel Spaß beim beschreiben von Dateien.

Jan

**Merke:**

-	`fprintf` wird verwendet um Inhalte in eine bereits geöffnete Datei zu schreiben.
-	Die Syntax ist fast genau die gleiche wie bei `printf`, nur dass als erster Parameter der Datenstrom angegeben wird.
-	Wenn der Rückgabewert negativ ist, ist etwas beim schreiben schief gegangen.

**Lernquiz:** Verwende folgende Fragen um das gelernte von heute zu festigen:

-	Wie kommst du an den ersten Parameter den du `fprintf` übergibst?
-	Wie kannst du einen statischen Text mit dem aktuellen Wert einer Integer Variablen in eine Datei schreiben?
-	Musst du den Rückgabewert der Funktion verwenden?

Am besten du schaust dir morgen und dann nochmal in ein paar Tagen die vorherigen Fragen an und beantwortest sie ohne den Text vorher gelesen zu haben.

**Weitere Informationen:** Den kompletten Quellcode zum heutigen Lernmoment findest du [hier](https://github.com/inginform/lernmomente/tree/master/C_DateienBeschreiben). Eine umfangreichere Erklärung gibt es bei [wikibooks](https://de.wikibooks.org/wiki/C-Programmierung:_Dateien). Wenn du wirklich alle Details brauchst, dann schau doch mal [hier](http://openbook.rheinwerk-verlag.de/c_von_a_bis_z/016_c_ein_ausgabe_funktionen_009.htm#mje5a9730700783816c72f0f4556b59d10).
