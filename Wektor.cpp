//
// Created by Piotr on 14.06.2024.
//
#include "Wektor.h"

using namespace std;
Wektor::Wektor(int rozmiar) {
    this->rozmiar = rozmiar;
    data =new double [rozmiar];
}

Wektor::~Wektor() {
    delete[] data;
}

double Wektor::get(int indeks) {
    if (indeks < 0 || indeks >= rozmiar) {
        throw out_of_range("Index out of range");
    }
    return data[indeks];
}

void Wektor::set(int indeks, double wartosc) {
    if (indeks < 0 || indeks >= rozmiar) {
        throw out_of_range("Index out of range");
    }
    data[indeks] = wartosc;
}

int Wektor::getRozmiar() {
    return rozmiar;
}

Wektor Wektor::dodaj(const Wektor& wektor2) {
    if (this->rozmiar != wektor2.rozmiar) {
        throw invalid_argument("The vectors must have the same size");
    }

    Wektor wynik(this->rozmiar);
    for (int i = 0; i < this->rozmiar; i++) { // Zmiana indeksu na 'i'
        wynik.data[i] = this->data[i] + wektor2.data[i];
    }
    return wynik;
}
Wektor Wektor::odejmij(const Wektor& wektor2) {
    if (this->rozmiar != wektor2.rozmiar) {
        throw invalid_argument("The vectors must have the same size");
    }

    Wektor wynik(this->rozmiar);
    for (int i = 0; i < this->rozmiar; i++) {
        wynik.data[i] = this->data[i] - wektor2.data[i];
    }
    return wynik;
}

Wektor Wektor::pomnoz(const Wektor& wektor2) {
    if (this->rozmiar != wektor2.rozmiar) {
        throw invalid_argument("The vectors must have the same size");
    }

    Wektor wynik(this->rozmiar);
    for (int i = 0; i < this->rozmiar; i++) {
        wynik.data[i] = this->data[i] * wektor2.data[i];
    }
    return wynik;
}

void Wektor::wczytajWektor() {
    for (int i = 0; i < rozmiar; i++) {
        cout << "Enter the value of the element " << i + 1 << ": ";
        cin >> data[i];
    }
}

// Implementacja funkcji wyświetlającej wektor
void wyswietlWektor( Wektor& wektor) {
    cout << "[";
    for (int i = 0; i < wektor.getRozmiar() - 1; i++) {
        cout << wektor.get(i) << ", ";
    }
    cout << wektor.get(wektor.getRozmiar() - 1) << " ";}