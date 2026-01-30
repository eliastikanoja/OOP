#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"
using namespace std;

int main()
{
    Asiakas Simo("Simo", 500);
    Simo.showSaldo();
    cout << endl;
    Simo.talletus(150);
    Simo.luotonNosto(150);
    Simo.showSaldo();
    cout << endl;
    Asiakas Pena("Pena", 500);
    Pena.showSaldo();
    cout << endl;
    cout << "Simo" << endl;
    Simo.showSaldo();
    Simo.tiliSiirto(50, Pena);
    cout << "Pena" << endl;
    Pena.showSaldo();

    return 0;
}
