#Lernmoment in C - Dateien erstellen, lass die Daten strömen

Ähnlich wie bei printf, können Dateien dir in sehr vielen Bereichen helfen. In Eingebetteten Systemen hast du vielleicht keine andere Möglichkeit Daten auszugeben. Auch auf dem PC kann es hilfreicher sein ein Log zu erstellen, statt alles auf die Konsole auszugeben. Und so weiter.

Heute wirst du sehen, wie du mit `fopen` eine Datei erstellst. Diese Funktion ist Bestandteil der C-Standardbibliothek. Du kannst sie verwenden indem du `<stdio.h>` einbindest.

So wird die Datei geöffnet:

```c
FILE *datenstrom;
datenstrom = fopen("lernmoment.txt", "w");
```

Die Funktion gibt einen sogenannten Stream, also einen Datenstrom, zurück. Diesen verwendest du später um genau diese Datei mit Inhalt zu füllen und auch um sie wieder zu schließen. Ein Datenstrom ist eher ein Konzept. Wie du anhand von `FILE *datenstrom;` siehst, handelt es sich dabei um einen Zeiger auf eine Struktur. Diese Struktur beinhaltet alle relevanten Informationen bezüglich der geöffneten Datei.

Es kann natürlich passieren, dass eine Datei nicht geöffnet werden kann. Vielleicht soll sie zum schreiben geöffnet werden, aber die Datei ist schreibgeschützt, oder dem Benutzer fehlen die passenden Rechte. In diesem Fall liefert die Funktion `NULL` anstelle eines gültigen Datenstroms zurück. Daher musst du den Datenstrom immer erst überprüfen bevor du ihn verwendest:

```c
if (datenstrom == NULL)
{
	//Fehlerbehandlung. z.B. Hinweis ausgeben mit printf und Programm beenden
}

// Nun kannst du anfangen etwas in die Datei zu schreiben.
```

Der Funktion `fopen` musst du 2 Parameter übergeben. Beim ersten handelt es sich um den Dateinamen. Dieser kann sowohl einen absoluten wie auch einen relativen Pfad enthalten. Wichtig für relative Pfade ist, dass sie sich immer auf das Verzeichnis beziehen in dem das Programm ausgeführt wird. Solltest du das Programm also an eine andere Stelle kopieren, könnte es sein, dass die Pfade nicht stimmen.

Wenn du unter Windows arbeitest, dann verwende einen doppelten Backslash als Trennzeichen im Pfad: `unterverzeichnis\\dateiname.txt`.

Der zweite Parameter gibt an in welchem Modus die Datei geöffnet werden soll. Im Beispiel oben habe ich das `"w"` verwendet. Dies bedeutet, dass die Datei angelegt wird, wenn sie noch nicht besteht. Sollte sie schon vorhanden sein, wird sämtlicher Inhalt darin gelöscht. Du kannst aber auch Inhalte an eine Datei anhängen. Dazu verwendest den Modus `"a"`. Solltest du nur lesen wollen, dann gibt es noch den Modus `"r"`. Es gibt noch weitere Modi, aber die kannst du dir selber anschauen, oder später lernen.

Wichtig beim Modus ist übrigens, dass du den jeweiligen Buchstaben in Anführungszeichen setzt und das auch keine Leerzeichen verwendest:

```c
// folgende Zeile wird dazu führen, dass keine Datei geöffnet wird:
datenstrom = fopen("dateiname.txt", " a ");
```

Jetzt erstmal viel Spaß beim öffnen von Dateien.

Jan

PS: Im Beispielprogramm siehst du auch wie Inhalte geschrieben werden. Damit beschäftigen wir uns im nächsten Lernmoment.

**Merke:**

-	`fopen` wird verwendet um Dateien zu öffnen.
-	Der erste Parameter ist der Dateiname. Er kann einen relativen oder absoluten Pfad beinhalten.
-	Der zweite Parameter ist der Modus. Du kannst `"a"` zum anhängen, `"w"` zum neu schreiben und `"r"` zum lesen verwenden.
-	Der Rückgabewert sollte immer auf `NULL` geprüft werden. Wenn er `NULL` ist, ist etwas schief gelaufen.

**Lernquiz:** Verwende folgende Fragen um das gelernte von heute zu festigen:

-	Wie lautet der Befehl um die bestehende Datei `wichtiges.log` zu öffnen und allen Inhalt zu entfernen?
-	Mit welchem Modus kannst du die Datei öffnen ohne ihren Inhalt zu löschen?
-	Wann solltest du den Rückgabewert der Funktion `fopen` überprüfen?

Am besten du schaust dir morgen und dann nochmal in ein paar Tagen die vorherigen Fragen an und beantwortest sie ohne den Text vorher gelesen zu haben.

**Weitere Informationen:** Den kompletten Quellcode zum heutigen Lernmoment findest du [hier](https://github.com/inginform/lernmomente/tree/master/C_DateienErstellen). Eine umfangreichere Erklärung gibt es bei [wikibooks](https://de.wikibooks.org/wiki/C-Programmierung:_Dateien). Wenn du wirklich alle Details brauchst, dann schau doch mal [hier](http://openbook.rheinwerk-verlag.de/c_von_a_bis_z/016_c_ein_ausgabe_funktionen_005.htm#mj47f082541eb4df9dbdcefdbc2775feae).
