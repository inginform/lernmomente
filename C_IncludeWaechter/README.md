#Lernmoment in C - Include Wächter, jetzt mit ohne doppelter Definition

Okay, diese Überschrift ist zwar nicht ganz an den Haaren herbeigezogen, aber wohl doch etwas mysteriös. Hast du dich dadurch angesprochen gefühlt? Schreib mir doch einen Kommentar oder eine Mail.

Es geht heute um etwas, dass du vielleicht schon mal in einem Header gesehen hast:

```c
#ifndef DEIN_HEADER_H
#define DEIN_HEADER_H

// Definitionen und Deklarationen kommen hier

#endif /* DEIN_HEADER_H */
```

Dieses Gebilde wird als Include Guard (oder Include Wächter) bezeichnet. Es ist eine Anweisungssequenz für den Präprozessor. Sie besagt, dass wenn `DEIN_HEADER_H` noch nicht definiert ist, alles weitere bis zum `#endif` ausgeführt wird. Da die nächste Anweisung das `#define DEIN_HEADER_H` ist, wird alles genau einmal definiert und deklariert.

Dazu solltest du wissen, wie der Präprozessor die `#include` Anweisungen bearbeitet. Der Präprozessor geht durch deinen Quellcode, bevor der Compiler läuft, und sucht alle `#include` Anweisungen. Bei jeder Anweisung die er findet, sucht er den Header für die `#include` Anweisung und kopiert dann alles aus dem Header in die Quelldatei bzw. in einen anderen Header. Also immer dahin wo gerade das `#include` steht.

Dabei berücksichtigt der Präprozessor noch weitere, für ihn bestimmte, Anweisungen. Diese sind mit dem Hash-Zeichen also `#` gekennzeichnet. So kommt es, dass wenn der Präprozessor einen Header mit einem Include Guard zweimal einbinden soll, dass er es nur einmal macht. Denn beim zweiten mal, stellt er fest, dass `#ifndef DEIN_HEADER_H` nicht erfüllt ist, weil es ja beim ersten mal schon definiert wurde.

Du fragst dich nun, wofür soll das gut sein? Stell dir folgendes Szenario vor, du hast einen weiteren Header, der mit `#include DeinHeader.h` deinen Header einbindet. Außerdem hast du ein Hauptprogramm, welches deine beiden Header einbindet. Definiert `DeinHeader.h` nun zum Beispiel einen Datentyp (`struct, union, enum`) oder eine globale Variable (was du besser nicht tun solltest), würde ohne den Include Guard dies zweimal definiert. Das ist allerdings nicht erlaubt und der Compiler wird einen Fehler geben (Im Beispielprogramm zu diesem Lernmoment, habe ich das gezeigt).

Ein weiteres Problem, welches durch einen Include Guard gelöst wird, sind zirkuläre Abhängigkeiten. Wenn du viele Dateien hast und viele Header verwendest, dann kann es passieren, dass über eine Kette ein Header sich selbst einbindet. Das könnte zum Beispiel so aussehen: Header1 -> Header2 -> Header3 -> Header1. Mit dem Include Guard wird Header1 nicht ein zweites mal eingebunden. Allerdings zeugt es von schlechtem Design, wenn du solche zirkulären Abhängigkeiten hast.

Die meisten Softwareentwickler (in C und C++) haben sich den Include Guard als Standard angewöhnt, obwohl es in vielen Situationen nicht unbedingt notwendig ist. Trotzdem macht es dir das Entwickeln gerade in großen Projekten häufig viel einfacher. Wichtig ist nur, dass in jedem Header tatsächlich ein unterschiedlicher Name, also das was nach dem `#ifndef` folgt, verwendet wird.

Jetzt erstmal viel Spaß beim ausprobieren.

Jan

**Merke:**

-	Definitionen (z.B. von Datentypen wie `enum Wochenende {Sa, So};`) dürfen immer nur einmal im Quellcode vorkommen.
-	Durch die Verwendung von Headern kann es leicht passieren, dass eine Definition mehrfach vorkommt.
-	Der Include Guard stellt sicher, dass ein Header immer nur einmal in den Quellcode kopiert wird.
-	Am einfachsten ist es, wenn du den Include Guard in jedem Header verwendest.
-	Wichtig ist, dass der Name in dem verwendeten Include Guard (z.B. `DEIN_HEADER_H`), nur exakt einmal in deinem Projekt verwendet wird.

**Lernquiz:** Verwende folgende Fragen um das gelernte von heute zu festigen:

-	Wann solltest du den Include Guard einsetzen?
-	Was kannst du mithilfe des Include Guards vermeiden?
-	Wie definierst du einen Include Guard?

Am besten du schaust dir morgen und dann nochmal in ein paar Tagen die vorherigen Fragen an und beantwortest sie ohne den Text vorher gelesen zu haben.

**Weitere Informationen:**

-	Den kompletten Quellcode zum heutigen Lernmoment findest du [hier](https://github.com/inginform/lernmomente/tree/master/C_IncludeWaechter).
