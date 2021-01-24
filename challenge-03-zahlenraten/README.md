[<<Zurück zur Übersicht](https://github.com/codewiththomas/c-challenges)

## Challenge 03 - Zahlenraten

### Aufgabe 

#### Basic Mode
Wir hatten es in der Vorlesung bereits begonnen. Schreibe ein Programm in C, bei welchem ein Nutzer eine zufällig generierte Zahl erraten soll.
1. Der Nutzer gibt den Zahlenbereich ein (bspw. 100)
2. Das Programm generiert eine Zufallszahl zwischen 1 <= x <= Zahlenbereich
3. Der Nutzer hat unendlich viele Versuche
4. Der Nutzer wird bei jedem Versuch aufgefordert eine Zahl einzugeben
   -> liegt die Zahl außerhalb des Zahlenbereichs wird eine Warnung ausgegeben
   -> ist die eingegebene Zahl kleiner als die gesuchte Zahl soll "Leider Falsch. Meine Zahl ist größer" ausgegeben werden
   -> ist die eingegebene Zahl größer als die gesuchte Zahl soll "Leider Falsch. Meine Zahl ist kleiner" ausgegeben werden
   -> ist die Zahl genau die richtige soll "Super, Du hast es erraten!" ausgegeben werden

Hilfsfunktion zur Erzeugung einer Zufallszahl (benötigt stdlib.h und time.h):

    int randomNumber(int maxNumber)
    {
	    srand(time(NULL));
	    return rand() % maxNumber + 1;
    }

#### Advanced Mode
Es soll die Anzahl der Versuche gewertet werden
Bei der Aufforderung zum Raten soll "n. Versuch - bitte Raten: " ausgegeben werden, wobei n den aktuellen Versuch repräsentiert


#### Expert Mode 
Nutzer machen gern falsche Eingaben. Das wollen wir unterbinden bzw. abfangen, indem wir eine eigene Funktion für
das Einlesen eines Integers entwerfen. Diese soll beim Abfragen des Zahlenbereichs und auch beim Raten zum Einsatz 
kommen. Folgende Fälle sollen abgefangen werden
- es wird eine Zahl kleiner 1 eingegeben (=> Parameter minNumber)
- es wird eine Zahl größer als der festgelegte Zahlenbereich eingegeben (=> Parameter maxNumber)
- es wird etwas anderes als eine ganze Zahl eingeben
Eine Fehleingabe soll unser Programm übrigens nicht als Fehlversuch werten!

    int scanInt(int minNumber, int maxNumber)
    {
        TODO: Implementierung hier
    }

Hinweis: Bei der Abfrage des Zahlenbereichs soll als obere Grenze der Maximalwert des int-Datentyps möglich sein.



#### Hardcore Mode
OK, Zeit unser Programm etwas schwieriger zu gestalten. Der Nutzer soll nur eine maximale Anzahl an Versuchen zur Verfügung haben.
Dazu soll eine Methode anhand des Zahlenbereichs berechnen, wie viele Versuche maximal zur Verfügung stehen.

Die Zahl soll nach der Formel "Zahlenbereich <= 2^Versuche" ermittelt werden, wobei der Wert für Versuche immer abgerundet werden soll.

    int getMaxTries(int maxNumber)
    {
        //TODO: Implementierung hier
    }

Tipp: Für die Umsetzung kannst Du die Funktion [log10()](https://www.tutorialspoint.com/c_standard_library/c_function_log10.htm) aus der Bibliothek math.h verwenden.
Diese gibt einen double-Wert zurück, welcher explizit in einen Integer konvertiert werden muss.




### Lösung

Die Lösung wird jeweils am Folgetag der Veröffentlichung der Aufgabe im Ordner solution eingestellt.

[<<Zurück zur Übersicht](https://github.com/codewiththomas/c-challenges)
