#Lernmoment in C - GCC, wie du ein Programm aus mehreren Quelldateien erzeugst
Gerade wenn du erst anfängst mit C, dann wirst du viele Beispiele sehen und umsetzen die lediglich aus einer Datei bestehen. Wenn du allerdings schon ein paar Programme geschrieben hast, wird dir auffallen, dass es langsam unübersichtlich wird. Dann solltest du deinen Quellcode auf verschiedene Dateien verteilen. Wie kannst du dann aber deinen ganzen Quellcode mit möglichst einem Aufruf übersetzen?

Hinweis: Wenn du eine Entwicklungsumgebung benutzt, wirst du diesen Lernmoment nicht unbedingt brauchen. Die Entwicklungsumgebung steuert üblicherweise den Compiler direkt an (z.B. du drückst zum übersetzen irgendwo auf einen Button). Verwendest du einen anderen Compiler und benutzt keine Entwicklungsumgebung, dann verhält es sich wahrscheinlich ähnlich wie beim gcc.

Das ist einfach mit diesem Aufruf erledigt:

```
gcc *.c
```

Dabei ist zu beachten, dass damit gcc wirklich alle Quelldateien (also Dateien mit der Endung .c) aus dem aktuellen Verzeichnis verwendet. Wenn du einige Quelldateien auslassen willst, ist dies kein so guter Weg. Dann macht es sicherlich mehr Sinn ein Build System wie beispielsweise [GNU Make](https://www.gnu.org/software/make/) einzusetzen.

Ein weiterer wichtiger Punkt ist, dass der Aufruf oben so keine Quelldateien aus Unterverzeichnissen verwendet. Dafür kannst du dem Compiler aber mehrere Dateien übergeben. Wenn du in deinem Verzeichnis 3 Quelldateien hast, aber nur 2 davon kompilieren willst, würde das so gehen:

```
gcc datei1.c datei3.c
```

Du siehst ich habe hier `datei2.c` ausgelassen. Somit wird sie auch nicht kompiliert. Ähnliches kannst du auch mit Dateien in einem Unterverzeichnis machen. Entweder du gibst die Datei im Unterverzeichnis explizit an:

```
gcc unterverzeichnis/datei.c *.c
```

oder du kannst auch sagen, dass alles aus dem Unterverzeichnis mit kompiliert werden soll:

```
gcc unterverzeichnis/*.c *.c
```

Dabei bezieht sich gcc immer auf das Verzeichnis in dem du den Befehl ausführst.

**Merke:**

- Einfache Projekte mit mehreren Dateien kann gcc direkt übersetzen in dem du `gcc *.c` verwendest.
- Das `*.c` bezieht sich immer nur auf das angegebene Verzeichnis.
- Du kannst gcc mehrere Dateien (auch aus unterschiedlichen Verzeichnis übergeben).
- Willst du etwas mehr Flexibilität (z.B. einige Quelldateien nicht mit übersetzen), dann kann dir ein Build System wie beispielsweise [GNU Make](https://www.gnu.org/software/make/) helfen.

**Lernquiz:** Verwende folgende Fragen um das gelernte von heute zu festigen:

- Wie kannst du gcc mitteilen, dass du nicht eine bestimmte, sondern alle Dateien übersetzen willst?
- Werden auch Dateien aus einem Unterverzeichnis übersetzt?

Am besten du schaust dir morgen und dann nochmal in ein paar Tagen die vorherigen Fragen an und beantwortest sie ohne den Text voher gelesen zu haben.

**Weitere Informationen:** 

- Der [Quellcode](https://github.com/inginform/lernmomente/tree/master/C_MehrereDateienKompilieren) zum heutigen Lernmoment besteht aus mehreren Dateien. So kannst du einfach ausprobieren wie du diese Dateien mit gcc übersetzen kannst. 
- Eine gute Einführung in GNU Make habe ich [hier](http://eitidaten.fh-pforzheim.de/daten/labore/if3lt/literatur/make.pdf) gefunden.
- Wenn du mehr über den gcc erfahren willst, dann gibt es natürlich die entsprechende [Homepage](https://gcc.gnu.org), aber es gibt auch eine ganz gute [Übersicht in Deutsch](http://openbook.rheinwerk-verlag.de/linux_unix_programmierung/Kap01-004.htm). 
