#ifndef ENCYCLOPEDIA_H
#define ENCYCLOPEDIA_H


// Methode zum Zählen, wie viele Artikel sich in der Enzyklopädie befinden
// Gibt einen Integer zwischen 0..255 zurück
// Beispielaufruf: int count = getArticleCount();
int getArticleCount();


// Fügt einen neuen Artikel zur Enzyklopädie hinzu. Als Parameter sind zwei 
// String zu übergeben. Der erste für den Titel des Artikels, der zweite für
// die Beschreibung. Wenn der Artikel erfolgreich hinzugefügt wurde, gibt die
// Funktion 1 zurück, ansonsten 0
// Beispielaufruf: addArticle("Thema1", "Meine Beschreibung zu Thema1");
int addArticle(char* title, char* description);


// Ruft einen Artikel anhand seiner Id (1..255) auf und schreibt dessen Titel
// direkt in die Konsole, an die aktuelle Stelle des Cursors. Dabei werden 
// keinerlei Steuerungszeichen wie bspw. "\n" übergeben. Sollte eine üngültige
// articleId übergeben werden, so wird "---" ausgegeben
// Beispielaufruf: printArticleTitle(5);
void printArticleTitle(int articleId);


// Ruft einen Artikel anhand seiner Id (1..255) auf und schreibt dessen Inhalt
// (also die Beschreibung) direkt in die Konsole, an die aktuelle Stelle des 
// Cursors. Dabei werden keinerlei Steuerungszeichen wie bspw. "\n" übergeben.
// Sollte eine üngültige articleId übergeben werden, so wird "---" ausgegeben
// Beispielaufruf: printArticleTitle(5);
void printArticleDescription(int articleId);


#endif /* ENCYCLOPEDIA_H */