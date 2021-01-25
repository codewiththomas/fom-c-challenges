[<<Zurück zur Übersicht](https://github.com/codewiththomas/c-challenges)

## Challenge 04 - Treppensteigen

### Aufgabe 

Heute gibt es mal etwas kniffliges, aber eigentlich doch ganz einfaches :P

#### Basic Mode
Implementiere eine Methode, welche von der main aus aufgerufen werden kann. Diese soll den Namen calculateCombinations haben und als
Parameter die Anzahl der Stufen erbegeben bekommen. Rückgabewert soll die Anzahl der möglichen Kombinationen sein.  

Implementiere nun erstmal die Rückgabewerte für eine kleine Anzahl von Stufen.
-> bei 0 Stufen oder einer negativen Zahl soll 0 zurückgegegeben werden
-> bei 1 Stufe gibt es nur die Möglichkeit 1 Stufe zu nehmen, also soll 1 zurückgegeben werden
-> bei 2 Stufen kann man entweder 2x 1 Stufe nehmen, oder 1x Doppelschritt, es gibt also 2 mögliche Kombinationen

#### Advanced/Expert/Hardcore Mode
Jetzt fehlt nur noch die Implementierung für mehr als 2 Stufen. 

Tipp: Wir haben grundsätzlich die Möglichkeit 1 Stufe zu nehmen + alle verbleibenden Kombinationen für die restlichen Stufen,
oder wir können 2 Stufen nehmen + alle verbleibenden Kombinationen für die dann verbleibenden Stufen

Tipp: Das Zauberwort ist Rekursion

![Erwartete Ausgabe Basic Mode](./images/hint_advanced.png)

### Lösung

Die Lösung wird jeweils am Folgetag der Veröffentlichung der Aufgabe im Ordner solution eingestellt.

[<<Zurück zur Übersicht](https://github.com/codewiththomas/c-challenges)
