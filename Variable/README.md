#Lernmoment - Variablen, von abstrakten Behältern und guten Namen
Heute geht es um Variablen. Diese sind ein elementares Konzept in der Programmierung. Obwohl sich die Syntax für die Definition und Verwendung einer Variablen in den Programmiersprachen unterscheidet, ist das dahinter stehende Konzept doch gleich (zumindest in den für dich relevanten Programmiersprachen). Es geht darum Werte zur späteren Verwendung zu speichern.

Der erste Schritt ist die Deklaration einer Variablen. Das sieht in den Programmiersprachen C, C++, C# und auch Java zum Beispiel so aus:

```c
int fuellstandGrosseRegentonneInLitern;
```

Das erste Schlüsselwort (`int`) gibt einen Datentypen an. Damit sagst du dem Computer welche Werte für die Variable zulässig sind und wie die oberen und unteren Wertegrenzen sind. Ausserdem weiß der Computer so, wieviel Speicher er für diese Variable reservieren muss.

Das zweite Wort (`fuellstandGrosseRegentonneInLitern`) ist der Name der Variablen. Je nach Programmiersprache sind unterschiedliche Symbole in der Deklaration eines Variablennamens zulässig. In den hier betrachteten Programmiersprachen ist es immer möglich eine beliebige Kombination von großen und kleinen Buchstaben zuverwenden. Dabei sind die meisten Sonderzeichen (wie zum Beispiel Umlaute) nicht zulässig.

Der Name einer Variablen ist nur für dich wichtig. Er soll dir helfen einen gut lesbaren Quellcode zu schreiben. Hast du den Namen einmal deklariert, musst du ihn so benutzen. Vertipptst du dich an einer Stelle, dann sagt der Compiler dir, dass er eine solche Variable nicht kennt.

Nachdem du eine Variable deklariert hast, kannst du sie verwenden. Das bedeutet, dass du entweder ihren Wert veränderst, oder du ihren aktuellen Wert verwendest. Hier ein Beispiel:

```c
int fuellstandGrosseRegentonneInLitern;
int fuellstandKleineRegentonneInMillilitern;
int vorhandenesRegenwasserInLitern;

fuellstandGrosseRegentonneInLitern = 500;
fuellstandKleineRegentonneInMillilitern = 10000;

vorhandenesRegenwasserInLitern = fuellstandGrosseRegentonneInLitern;
vorhandenesRegenwasserInLitern = vorhandenesRegenwasserInLitern + fuellstandKleineRegentonneInMillilitern / 1000;
```

In den ersten 3 Zeilen werden 3 Variablen mit unterschiedlichen Namen deklariert. Alle Variablen haben den selben Datentyp, aber sind vollkommen autark. In den darauf folgenden 2 Zeilen wird den beiden Füllstand's Variablen je ein Wert zugewiesen. In den letzten beiden Zeilen siehst du eine Berechnung.

Wichtig ist, dass du verstehst, dass der Computer immer nur genau das macht, was du ihm sagst. Vielleicht wunderst du dich, warum in der letzten Zeile der Variablenname `vorhandenesRegenwasserInLitern` zweimal auftaucht. Der Computer liest die letzte Zeile ungefähr so:

Er erkennt, dass ein Gleichheitszeichen, das wird hier Zuweisungsoperator genannt, enthalten ist. Daher fängt er an und wertet erst alles aus, was rechts davon steht. Er nimmt also den aktuellen Wert der Variable `fuellstandKleineRegentonneInMillilitern` (10000) und dividiert diesen durch 1000. Der Computer weiß nämlich, dass Punktrechnung vor Strichrechnung gilt. Als nächstes liest er den aktuellen Wert der Variable `vorhandenesRegenwasserInLitern` (500) und addiert dies zu dem Resultat der vorherigen Berechnung. Abschließend nimmt er das neue Resultat (510) und weist es der Variable mit dem Namen `vorhandenesRegenwasserInLitern` zu.

Es gilt also, dass alle Variablen die rechts vom Zuweisungsoperator stehen nur ausgelesen werden und sich ihr Inhalt somit nicht ändert. Der Variablen die links vom Zuweisungsoperator steht wird ein neuer Wert zugewiesen. Sie verliert somit ihren vorherigen Wert.

**Merke:** Variablen

- werden benutzt um Werte zur späteren Verwendung zu speichern,
- müssen erst deklariert werden und können dann verwendet werden,
- kannst du einen Wert zuweisen oder den aktuellen Wert abfragen,
- kannst du deklarieren unter der Angabe eines Namens und Datentyps.

**Lernquiz:** Hier ein paar Fragen zum "Lernmoment - Eingebettete Systeme":

- Was ist ein Eingebettetes System?
- Welche Gegenstände aus deinem alltäglichen Leben haben ein Eingebettetes System?
- Welche Anforderungen werden häufig an Eingebettete Systeme gestellt?

Sofern du die Fragen nicht beantworten kannst, solltest du nochmal beim vorherigen Lernmoment nachschauen.

**Weitere Informationen:** Eine sehr detailierte Erklärung des Konzepts der Variable mit Beispielen in der Programmiersprache C gibt es bei [wikibooks](https://de.wikibooks.org/wiki/C-Programmierung:_Variablen_und_Konstanten). Auch wenn du eine andere Programmiersprache lernst, kann dir die Einführung dort beim verstehen helfen.
