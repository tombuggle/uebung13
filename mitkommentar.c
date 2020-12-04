#include <stdio.h> //Startet die Bibliothek "stdio.h"

int main()
{
    int Zahl1 = 0; //Erstellt die Variable "Zahl1" und definiert sie mit 0; "int" gibt den Datentyp an
    int Zahl2 = 0; //Erstellt die Variable "Zahl2" und definiert sie mit 0; "int" gibt den Datentyp an
    int Ergebnis = 0; //Erstellt die Variable "Ergebnis" und definiert sie mit 0; "int" gibt den Datentyp an
    int Eingabe = 0; //Erstellt die Variable "Eingabe" und definiert sie mit 0; "int" gibt den Datentyp an

    printf ("Mit diesem Programm werden zwei Zahlen verrechnet! \n"); //Text
    printf ("\n"); //Leerzeile
    printf ("\n"); //Leerzeile
    printf ("\n"); //Leerzeile
    printf ("Bitte gib die erste Zahl ein: \n"); //Text
    scanf ("%i", &Zahl1);
    /*
    Mit "scanf" wird eine Eingabe über die Tastatur "eingescant".
    "%i" beschreibt den Datentyp (Char, Int, usw.).
    "&Zahl1" sendet die Eingabe in die Variable "Zahl1" und überschreibt diese.
    */
    printf ("Bitte gib die zweite Zahl ein: \n"); //Text
    scanf ("%i", &Zahl2);
    /*
    Mit "scanf" wird eine Eingabe über die Tastatur "eingescant".
    "%i" beschreibt den Datentyp (Char, Int, usw.).
    "&Zahl1" sendet die Eingabe in die Variable "Zahl1" und überschreibt diese.
    */
    printf ("Wie soll mit den Zahlen grechnet werden?\n"); //Text
    printf ("Tippe 1 fuer Addieren\n"); //Text
    printf ("Tippe 2 fuer Subtrahieren\n"); //Text
    scanf ("%i", &Eingabe);
    /*
    Mit "scanf" wird eine Eingabe über die Tastatur "eingescant".
    "%i" beschreibt den Datentyp (Char, Int, usw.).
    "&Eingabe" sendet die Eingabe in die Variable "Eingabe" und überschreibt diese.
    */

    switch (Eingabe) { //startet die Auswahloption switch-case (eine Menüoption), die Auswahl bezieht sich auf den eingesacanten Wert von "Eingabe"
    case 1: //Wenn Variable "Eingabe" = 1 (Addieren) dann:
    Ergebnis = Zahl1 + Zahl2; //Rechne Variable "Zahl1" + Variable "Zahl2"
    printf ("Addiert man Zahl 1 und Zahl 2 ergibt das: \n"); //Text
    printf ("%i", Ergebnis); break; //Schreibe das Ergebnis: "i%" bestimmt den Datentyp des Ergebnisses/Ausgabe; "Ergebnis" ruft die Variable "Ergebnis" ab, die vorher berechnet wurde;
                                    //"break" bedeutet: Wenn Eingabe nicht gleich 1 (Addieren), dann springe zum nächsten Case (case 2) oder beende das gesamte Programm (return 0;)
    case 2: //Wenn Variable "Eingabe" = 2 (Subtrahieren) dann:
    Ergebnis = Zahl1 - Zahl2; //Rechne Variable "Zahl1" - Variable "Zahl2"
    printf ("Subtrahiert man Zahl 2 von Zahl 1 ergibt das: \n"); //Text
    printf ("%i", Ergebnis); break; //Schreibe das Ergebnis: "i%" bestimmt den Datentyp des Ergebnisses/Ausgabe; "Ergebnis" ruft die Variable "Ergebnis" ab, die vorher berechnet wurde;
                                    //"break" bedeutet: Wenn Eingabe nicht gleich 2 (Subtrahieren), dann springe zum nächsten Case (case 3)  oder beende das gesamte Programm (return 0;)
    } //beendet die Auswahloption switch-case (eine Menüoption)
    return 0; //beendet das Programm
}
