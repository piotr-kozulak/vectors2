#include "wektor.h"
#include <iostream>

using namespace std;
void wyswietlMenu() {
    cout << "\nMenu\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. End\n";
    cout << "Choose option: ";
}
int main() {
    // Stworzenie wektorów x i y
    Wektor x(2), y(2);

    int opcjaWczytywania;

    do {
        cout << "\nChoose how to enter vector values:\n";
        cout << "1. Default values(not working yet)\n";
        cout << "2. Manual entry\n";
        cout << "Choose option:\n ";
        cin >> opcjaWczytywania;
        cin.ignore();
    } while (opcjaWczytywania < 1 || opcjaWczytywania > 2);

    // Wczytanie wartości wektorów
    if (opcjaWczytywania == 1) {
        // Ustawienie domyślnych wartości
        for (int i = 0; i < 5; i++) {
            x.set(i, i + 1);
            y.set(i, 2 * i + 1);
        }
    } else {
        // Ręczne wprowadzanie wartości
        x.wczytajWektor();
        y.wczytajWektor();
    }

    int opcjaWykonania;

    do {
        wyswietlMenu();
        cin >> opcjaWykonania;
        cin.ignore();

        switch (opcjaWykonania) {
            case 1:
                x = x.dodaj(y);
                cout << "\nVector A when added to B:\n";
                wyswietlWektor(x);
                break;
            case 2:
                x = x.odejmij(y);
                cout << "\nVector A minus B:\n";
                wyswietlWektor(x);
                break;
            case 3:
                x = x.pomnoz(y);
                cout << "\nVector A after multiplying by B:\n";
                wyswietlWektor(x);
                break;
            case 4:
                cout << "\nEnd.\n";
                break;
            default:
                cout << "\nWrong option.Choose right one\n";
        }

        cout << "\nPress Enter to continue...\n";
        cin.ignore();
    } while (opcjaWykonania != 4);

    return 0;
}