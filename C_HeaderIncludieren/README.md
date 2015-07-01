#Lernmoment in C - Header includieren, verwende deine oder die Arbeit anderer einfach wieder

Sicher ist dir schon aufgefallen, dass in allen Quelldateien (also mit der Endung .c) zu oberst ein `#include` vorkommt. Ist dir schon mal aufgefallen, dass es dafür unterschiedliche Schreibweisen gibt?

Häufig wirst du die Variante mit spitzen Klammern sehen:

```c
#include <stdio.h>
```

Wenn du selber Header schreibst, dann brauchst du auch die Schreibweise mit Anführungszeichen:

```c
#include "meinHeader.h"
```

Der Unterschied zwischen diesen beiden Varianten liegt darin wo der Präprozessor nach der Datei sucht. Die Header der C-Standardbibliothek kann der Compiler über den Includepfad finden. Dieser wird während der Installation des Präprozessors automatisch definiert.

Wenn du den gcc verwendest, dann kannst du dir den aktuellen Includepfad und einige weitere Informationen mit diesem Befehl `echo | gcc -v -x c -E -` ausgeben lassen. In Visual Studio sind die Angaben je nach Version in der Oberfläche und Umgebungsvariablen verstreut [1](https://msdn.microsoft.com/de-de/library/36k2cdd4.aspx)\.

Der Unterschied zwischen den beiden Varianten ist, dass nur der Includepfad durchsucht wird, wenn du spitze Klammern verwendest. Wenn du Anführungszeichen nimmst, dann wird vor dem Includepfad noch das lokale Verzeichnis durchsucht. Daher wird der letztere Ansatz auch für selbst geschriebene Header verwendet.

Durch das erweitern des Includepfads, alle Compiler bzw. Präprozessoren bieten diese Möglichkeit, ist es übrigens auch möglich, dass du die Variante mit spitzen Klammern für deine selbst geschriebenen Header verwendest. Ich empfehle dir allerdings das nur zu machen, wenn du dich schon wirklich auskennst.

Die Variante mit den Anführungszeichen bietet übrigens noch die Möglichkeit, dass du Header aus einem Unterverzeichnis verwendest:

```c
#include "anderesModul/einHeader.h"
```

Dabei gilt jedoch zu berücksichtigen, dass es eine relative Pfadangabe ist, die sich auf den Ort der Quelldatei bezieht. Ein Beispiel habe ich im Quellcodeverzeichnis für dich vorbereitet.

**Merke:**

-	Verwende die `#include` Anweisung mit spitzen Klammern, wenn du einen Header aus der C-Standardbibliothek benutzen willst.
-	Verwende die `#include` Anweisung mit Anführungszeichen, wenn du den Header in deinem Projekt selbst erstellt hast.
-	Der Includepfad wird während der Installation des Compilers automatisch gesetzt.
-	Je nach Compiler gibt es Möglichkeiten den Includepfad zu verändern.

**Lernquiz:** Verwende folgende Fragen um das gelernte von heute zu festigen:

-	Wo wird nach stdio.h gesucht, wenn du folgendes Include verwendest `#include "stdio.h"` ?
-	Was musst du schreiben, wenn du den Header neueFunktion.h inkludieren willst? Hinweis: Er liegt im gleichen Verzeichnis wie deine Quelldateien.

Am besten du schaust dir morgen und dann nochmal in ein paar Tagen die vorherigen Fragen an und beantwortest sie ohne den Text vorher gelesen zu haben.

**Weitere Informationen:** Den kompletten Quellcode zum heutigen Lernmoment findest du [hier](tbd).
