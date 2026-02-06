#include "notifikaattori.h"
#include <iostream>
using namespace std;

Notifikaattori::Notifikaattori()
{
    cout << "Luodaan notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja *uusi)
{
    cout << "Notifikaattori lisaa seuraajan :" << uusi->getNimi() << endl;

    if (uusi == nullptr) return;
    if (seuraajat == nullptr)
    {
        seuraajat = uusi;
        return;
    }
    uusi->next = seuraajat;
    seuraajat = uusi;
}
void Notifikaattori::poista(Seuraaja *poisto)
{
    if (poisto == nullptr) return;
    if (seuraajat == nullptr) return;
    if (seuraajat == poisto)
    {
        seuraajat = seuraajat->next;
        cout << "Notifikaattori poistaa seuraajan " << poisto->getNimi() << endl;
        return;
    }
    Seuraaja *seurTempNext = seuraajat->next;
    Seuraaja *seurTempPrev = seuraajat;

    while (seurTempNext->next != nullptr)
    {
        if (seurTempNext == poisto)
        {
            seurTempPrev->next = seurTempNext->next;
            cout << "Notifikaattori poistaa seuraajan " << poisto->getNimi() << endl;
            return;
        }
        seurTempPrev = seurTempNext;
        seurTempNext = seurTempNext->next;
    }
    if (seurTempNext == poisto)
    {
        seurTempPrev->next = nullptr;
    }
}

void Notifikaattori::tulosta()
{
    if (seuraajat == nullptr)
    {
        cout << "Ei seuraajia!" << endl;
        return;
    }
    cout << "Notifikaattorin seuraajat: " << endl;
    Seuraaja *seurTempNext = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        cout << seurTempNext->getNimi() << endl;
        seurTempNext = seurTempNext->next;
    }
    cout << seurTempNext->getNimi() << endl;

}

void Notifikaattori::postita(string viesti)
{
    if (seuraajat == nullptr)
    {
        cout << "Ei seuraajia!" << endl;
        return;
    }
    cout << "Notfikaattori postaa viestin: " << viesti << endl;
    Seuraaja *seurTempNext = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        seurTempNext->paivitys(viesti);
        seurTempNext = seurTempNext->next;
    }
    seurTempNext->paivitys(viesti);
}
