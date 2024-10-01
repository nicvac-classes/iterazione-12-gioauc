#include <iostream>
using namespace std;

int main() {
    float risp, costomoto, totrisp, ammanco, rimanenza;
    int count;
    cout << "Inserisci il costo della moto";
    cin >> costomoto;
    cout << "Inerisci l'ammontare dei tuoi risparmi iniziali";
    cin >> risp;
    totrisp = risp;
    while (totrisp < costomoto){
        ammanco = costomoto - totrisp;
        cout << "I riparmi (" << totrisp << ") non sono sufficienti. Sono necesari altri" & ammanco;
        cout << "Quanto altro hai risparmiato?";
        cin >> risp;
        count = count + 1;
        totrisp = totrisp + risp;
    }
    cout << "Hai risparmiato " << totrisp << "€. Puoi comprare la moto.";
    cout << "Hai risparmiato " << count << " volte";
    rimanenza = totrisp - costomoto;
    cout << "ti avanzano ancora " << rimanenza;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
