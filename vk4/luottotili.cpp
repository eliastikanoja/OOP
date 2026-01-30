#include "luottotili.h"
#include <iostream>
using namespace std;
Luottotili::Luottotili()
{
   // cout << "Olen Luottotili: defaultkonstruktorissa!" << endl;
}

Luottotili::Luottotili(string om, double lr) : Pankkitili(om)
{
  //  cout << "Olen Luottotili: parametrikonstruktorissa!" << endl;
    luottoRaja = lr;
    saldo=lr;
}

bool Luottotili::deposit(double sum)
{
  //  cout << "Olen Luottotili: velanmaksussa!" << endl;
    cout << "Saldo ennen: " << saldo << endl;
    cout << "Luottotili: talletus " << sum << " tehty" << endl;
    cout << "Saldo jälkeen: " << sum + saldo << endl;
    if ( (sum < 0) || ( (sum + saldo) > 9 ) ) return false;
    saldo += sum;
    return true;
}

bool Luottotili::withdraw(double sum)
{
  //  cout << "Olen Luottotili: velannostossa!" << endl;
    cout << "Luottoraja: " << luottoRaja << endl;
    cout << "Luottotilin saldo ennen: " << saldo << endl;
    cout << omistaja << " Luottotili: nosto " << sum << " tehty" << endl;
    cout << "Luottotilin saldo jalkeen: " << saldo - sum << endl;
    if (sum < 0 || sum > saldo) return false;
    saldo -= sum;
    return true;
}
