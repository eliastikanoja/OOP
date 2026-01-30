#include "asiakas.h"
#include <iostream>
using namespace std;
Asiakas::Asiakas()
{
    //cout << "Asiakas: olen defaultkonstruktorissa!" << endl;
}

Asiakas::Asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr)
{
   // cout << "Asiakas: olen defaultkonstruktorissa!" << endl;
    nimi = name;
}

bool Asiakas::tiliSiirto(double sum, Asiakas& kohde)
{
    if (sum <= 0) {
        return false;
    }
    cout << "Pankkitili: " << nimi << " siirtaa " << sum << " " << kohde.getNimi() << "lle" << endl;
    if (kayttotili.withdraw(sum)) {
        kohde.kayttotili.deposit(sum);
        cout << "Siirto onnistui! " << sum << " asiakkaalta " << nimi << " asiakkaalle " << kohde.getNimi() << endl;
        return true;
    }
    return false;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Asiakkaan nimi: " << nimi << endl;
    cout << "Kayttotilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double sum)
{
   return kayttotili.deposit(sum);
}

bool Asiakas::nosto(double sum)
{
    return kayttotili.withdraw(sum);
}

bool Asiakas::luotonMaksu(double sum)
{
    return luottotili.deposit(sum);
}

bool Asiakas::luotonNosto(double sum)
{
    return luottotili.withdraw(sum);
}

