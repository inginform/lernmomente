#Lernmoment - Funktionen, strukturiere deinen Quellcode
Funktionen haben in unterschiedlichen Programmiersprachen unterschiedliche Name. In C++, C# und auch Java wird dir der Begriff Methode häufig begegnen. In C wird von Funktionen gesprochen.

Eine Funktion erstellst du immer dann, wenn du die gleiche Sequenz von Anweisungen mehrfach in deinem Quellcode findest. Eine Funktion ist also eine Art Unterprogramm. Dieses kannst du immer wieder aufrufen, wenn du es gerade benötigst. Das kennst du vielleicht aus CAD Programmen in denen es vorgefertigte Teilzeichnungen gibt, die du einfach verwenden kannst.

Genau wie bei Variablen auch, muss eine Funktion erstmal deklariert werden. Das könnte zum Beispiel so aussehen:

```c
int BerechneFuellstand()
{

}
```

Das erste Schlüsselwort `int` sollte dir bereits bekannt vorkommen. Es bezeichnet einen Datentyp. Hier gibt es an welchen Typ der Wert hat, der von der Funktion zurückgegeben wird. Dies wird als Rückgabewert bezeichnet.

Das zweite Wort (`BerechneFuellstand`) ist der Name der Funktion. Genau wie bei Variablen sollte dieser Name möglichst für dich klar verständlich sein. Die runden Klammern nach dem Namen zeigen, dass es sich hier um eine Funktion und nicht eine Variable handelt.

Nachdem


**Merke:** Funktionen

- werden benutzt um Quellcode zu vereinfachen und zu strukturieren,
- vermeiden, dass du die gleiche Sequenz von Anweisungen mehrfach in deinem Quellcode hast,
- haben immer einen Rückgabewert, auch wenn dieser "nichts" sein kann,
- werden üblicherweise erst definiert und dann verwendet.

**Lernquiz:** Hier ein paar Fragen zum "Lernmoment - ???":

- 

Sofern du die Fragen nicht beantworten kannst, solltest du nochmal beim vorherigen Lernmoment nachschauen.

**Weitere Informationen:** Eine sehr detailierte Erklärung des Konzepts der Funktionen mit Beispielen in der Programmiersprache C gibt es bei [wikibooks](https://de.wikibooks.org/wiki/C-Programmierung:_Funktionen). Eine gute Erklärung von Funktionen für C# gibt es [hier](https://msdn.microsoft.com/de-de/library/ms173114.aspx).
