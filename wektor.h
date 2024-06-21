//
// Created by Piotr on 14.06.2024.
//

#ifndef UNTITLED_WEKTOR_H
#define UNTITLED_WEKTOR_H
#include <iostream>
void wyswietlMenu();
class Wektor {
public:
    // Konstruktor
    Wektor(int rozmiar);

    // Destruktor
    ~Wektor();

    // Pobranie wartości elementu
    double get(int indeks);

    // Ustawienie wartości elementu
    void set(int indeks, double wartosc);

    // Pobranie rozmiaru wektora
    int getRozmiar();

    // Deklaracje nowych funkcji
    Wektor dodaj(const Wektor& wektor2);
    Wektor odejmij(const Wektor& wektor2);
    Wektor pomnoz(const Wektor& wektor2);


    void wczytajWektor();

private:
    // Tablica przechowująca dane wektora
    double* data;


    int rozmiar;
};


void wyswietlWektor(Wektor& wektor);


#endif //UNTITLED_WEKTOR_H
