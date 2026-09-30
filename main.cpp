#include <iostream>
#include <iomanip>

using namespace std;

class Drzewo {
private:
    struct Node {
        int liczba;
        Node* lewy;
        Node* prawy;
    };

    Node* korzen;

    Node* stworzLisc(int liczba) {
        Node* nowy = new Node;
        nowy->liczba = liczba;
        nowy->lewy = nullptr;
        nowy->prawy = nullptr;
        return nowy;
    }

    void dodaj(Node*& d, int liczba) {
        if (d == nullptr) {
            d = stworzLisc(liczba);
        } else {
            if (liczba < d->liczba) {
                dodaj(d->lewy, liczba);
            } else {
                dodaj(d->prawy, liczba);
            }
        }
    }

    void wyswietl(Node* d) {
        if (d != nullptr) {
            wyswietl(d->lewy);
            cout << d->liczba << " ";
            wyswietl(d->prawy);
        }
    }

    void wyswietlDrzewo(Node* d, int poziom = 0) {
        if (d == nullptr) return;

        wyswietlDrzewo(d->prawy, poziom + 1);
        cout << string(poziom * 4, ' ') << d->liczba << endl;
        wyswietlDrzewo(d->lewy, poziom + 1);
    }

public:
    Drzewo() {
        korzen = nullptr;
    }

    void dodaj(int liczba) {
        dodaj(korzen, liczba);
    }

    void wyswietl() {
        wyswietl(korzen);
    }

    void wyswietlDrzewo() {
        wyswietlDrzewo(korzen);
    }
};

int main() {
    Drzewo drzewo;

    int n;
    cout << "ile liczb chcesz dodac? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int liczba;
        cout << "Podaj liczbe " << (i + 1) << ": ";
        cin >> liczba;
        drzewo.dodaj(liczba);
    }

    cout << endl;

    cout << "Drzewo:" << endl;
    drzewo.wyswietlDrzewo();

    return 0;
}
