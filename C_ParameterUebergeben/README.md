#Lernmoment in C - Parameter übergeben, das Unveränderliche verändern

Häufig kommt es vor, dass du einer Funktion Daten übergeben möchtest oder gar musst. Was aber genau passiert denn eigentlich, wenn eine Funktion mit einem oder mehreren Parametern aufgerufen wird?

Schau dir folgendes Beispiel an:

```c
float BerechneKugelVolumen(float radius)
{
  float volumen;
  volumen = 1.333 * 3.141 * radius * radius * radius;
  return volumen;
}

```

Wie du siehst, erwartet diese Funktion genau einen Parameter (`radius`). Außerdem kannst du sehen, dass innerhalb der Berechnung dieser Parameter einfach wie eine Variable verwendet wird.

Dies ist möglich, weil der Compiler einiges für dich macht, wenn er an einem Funktionsaufruf vorbei kommt. Schau dir also das folgende Hauptprogramm an, welches die oben definierte Funktion verwendet:

```c
int main(void)
{ 
  float eingelesenerRadius, volumen;

  printf("Programm zur Berechnung des Volumens einer Kugel");
  printf("\n\nRadius der Kugel in cm: ");
  scanf("%f", &eingelesenerRadius);

  **volumen = BerechneKugelVolumen(eingelesenerRadius);**
  printf("Volumen: %f Kubikzentimeter\n", volumen);

  return EXIT_SUCCESS;
}
```

In diesem Hauptprogramm existiert eine Variable mit dem Namen `eingelesenerRadius`. Sie hat den Wert den der Benutzer eingegeben hat, bevor die Funktion `BerechneKugelVolumen` aufgerufen wird. Beim Funktionsaufruf während der Ausführung des Programms passiert nun folgendes:

1.	Es wird eine lokale Variable mit dem Namen `radius` angelegt, die nur innerhalb der Funktion sichtbar ist.
2.	Der aktuelle Wert der Variablen `eingelesenerRadius` wird der neuen Variablen `radius` zugewiesen.

Daraus folgt, dass es innerhalb der Funktion nicht nur eine Variable `volumen` gibt, diese wurde ja explizit definiert, sondern auch die Variable `radius`. Diese wurde vom Compiler für dich angelegt. Diese Variable verhält sich exakt so wie jede andere die du selber definierst. Du kannst also nicht nur ihren Wert auslesen, sondern ihn auch verändern:

```c
float BerechneKugelVolumen(float radius)
{
  float volumen;
  volumen = 1.333 * 3.141 * radius * radius * radius;

  // Dies macht hier keinen Sinn, aber es ist möglich
  radius = radius * 2;

  return volumen;
}

```

In den wenigsten Fällen macht es wirklich Sinn so etwas zu tun, aber es ist möglich! Sogar, ohne das der Compiler dich darauf hinweist. Wenn du also versehentlich den Inhalt des Parameters veränderst und dann später zur Berechnung darauf zugreifst, wird dein Ergebnis nicht wie du es erwartest.

Was würde passieren, wenn du diese modifizierte Funktion im Hauptprogramm oben verwendest? Würde sich der Inhalt der Variablen `eingelesenerRadius` nach der Ausführung der Funktion verändert haben, oder nicht?

Es ist tatsächlich so, dass sich `eingelesenerRadius` nicht verändert. Das liegt daran, dass für die Funktion eine neue Variable angelegt wurde, welche lediglich den aktuellen Wert von `eingelesenerRadius` bekommen hat.

Ein weiterer Seiteneffekt ist, dass wenn du der Funktion eine Konstante übergibst (z.B. `BerechneKugelVolumen(42);`), kannst du den Wert dieser Konstanten innerhalb der Funktion verändern. D.h. wenn du eine Konstante als Parameter in eine Funktion gibst, ist sie innerhalb der Funktion keine Konstante mehr, sondern eine ganz normale lokale Variable.

Jetzt erstmal viel Spaß beim ausprobieren.

Jan

**Merke:**

-	Wird eine Funktion aufgerufen, wird für jeden Parameter im Funktionskopf eine lokale Variable definiert.
-	Jede dieser Variablen wird auf den aktuellen Wert gesetzt der der Funktion übergeben wird.
-	Auch diese lokalen Variablen können in der Funktion geändert werden.
-	Änderungen an lokalen Variablen innerhalb einer Funktion wirken sich nicht auf das Hauptprogramm bzw. die aufrufende Funktion aus.

**Lernquiz:** Verwende folgende Fragen um das gelernte von heute zu festigen:

-	Wie kommt der Wert einer Variablen in eine Funktion während des Funktionsaufrufs?
-	Kannst du den Wert eines Parameters innerhalb der Funktion verändern?
-	Kann eine Funktion Variablen im Hauptprogramm verändern?

Am besten du schaust dir morgen und dann nochmal in ein paar Tagen die vorherigen Fragen an und beantwortest sie ohne den Text vorher gelesen zu haben.

**Weitere Informationen:**

-	Den kompletten Quellcode zum heutigen Lernmoment findest du [hier](https://github.com/inginform/lernmomente/tree/master/C_ParameterUebergeben).
-	Eine sehr ausführliche Beschreibung gibt es [hier](http://jag2000.de/c++/index.php?id=files/kapE/kap0500&pid=kap0520). Bitte beachte: Performance ist nur in sehr spezifischen Fällen ein Problem. Es ist immer sinnvoll leserlichen Quellcode zu schreiben. Sollte es wirklich ein Problem mit der Performance geben, kannst du das immer noch optimieren!
