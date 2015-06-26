#Lernmoment - Funktionen definieren, sag was die Funktion tun soll
Du verwendest Funktionen in C um deinen Quellcode zu strukturieren. Dein Ziel sollte es sein, dass dein Quellcode gut lesbar ist, dass er auch von anderen leicht erweitert und geändert werden kann und, dass du möglichst viele Teile wiederverwenden kannst.

Ich habe heute folgendes Programm:

```c
#include <stdio.h>

int main(void)
{ 
  float radius, volumen;
  printf("Programm zur Berechnung des Volumens einer Kugel");
  printf("\n\nRadius der Kugel in cm: ");
  scanf("%f",&radius);
  volumen = 1.333 * 3.141 * radius * radius * radius;
  printf("Volumen: %f Kubikzentimeter\n",volumen);
  return 0;
}
```

Wie du siehst macht das Programm zwei unterschiedliche Dinge: 

1. Interaktion mit dem Benutzer (scanf und printf Befehle)
2. Berechnung des Volumens einer Kugel

Um eine klare Trennung dieser beiden Verantwortlichkeiten zu erreichen, werde ich nun die Berechnung in eine separate Funktion ausgliedern:

```c
float BerechneKugelVolumen(float radius)
{
  float volumen;
  volumen = 1.333 * 3.141 * radius * radius * radius;
  return volumen;
}
```

Die erste Zeile wird **Funktionskopf** genannt. Sie besteht aus:

- dem Datentyp des **Rückgabewert**s. Jede Funktion gibt einen Wert zurück. Hiermit definierst du welche Form und Grenzen er besitzt.
- dem **Funktionsname**n. Dieser Name hilft dir die Funktion zu identifizieren. Um einen gut lesbaren Quellcode zu bekommen, soltest du hier einen aussagkräftigen Namen verwenden.
- der **Parameterliste**. Jeder Funktion kannst du optional Parameter übergeben. Wenn deine Funktion keine Parameter hat, dann machst du einfach nur die runden Klammern auf und zu. Mehr Details zu den Parametern folgen in einem separaten Lernmoment.

Danach folgt der Funktionsrumpf. Er wird eingeleitet durch eine offene geschweifte Klammer. Danach folgen die Anweisungen die deine Funktion ausführen soll. Hier siehst du, dass es sich um die gleichen Anweisungen handelt, die auch vorher im Hauptprogramm standen. Es gibt da aber noch eine zusätzliche Anweisung. Dies ist die `return` Anweisung. Diese Anweisung muss immer als letzte Anweisung im Funktionsrumpf stehen. Der Funktionsrumpf wird beendet durch eine geschlossene geschweifte Klammer.

Details zu den Themen Rückgabewert, Parameterliste und `return` Anweisung bekommst in einem der folgenden Lernmoment. Im nächsten Lernmoment zeige ich dir erstmal wie du eine Funktion verwendest. Denn die Definition einer Funktion ist erst der erste Schritt.

**Merke:**

- Funktionen werden benutzt um Quellcode zu vereinfachen und zu strukturieren.
- Gliedere unterschiedliche Verantwortlichkeiten in separate Funktionen.
- Der Funktionskopf besteht immer aus mindestens dem Rückgabewert, einem Namen und runden Klammern.
- Nach dem Funktionskopf folgt der Funktionsrumpf. Dieser enthält eine Liste von Anweisungen in geschweiften Klammern.
- Die letzte Anweisung in einem Funktionsrumpf muss immer das `return` sein.

**Lernquiz:** Verwende folgende Fragen um das gelernte von heute zu festigen:

- Warum werden Funktionen verwendet?
- Was ist das letzte Zeichen in einem Funktionskopf?
- Wie heißt das Ding mit den geschweiften Klammern?

Sofern du die Fragen nicht beantworten kannst, solltest du nochmal beim vorherigen Lernmoment nachschauen.

**Weitere Informationen:** Das komplette Programm in der Version mit und ohne Funktion findest du wie immer im Verzeichnis der [Ing.InForm Lernmomente](https://github.com/inginform/lernmomente/tree/master/C_FunktionenDefinieren). Den Quellcode kannst du so in einer Entwicklungsumgebung ausprobieren. Ausserdem enthält er zusätzliche Informationen.
