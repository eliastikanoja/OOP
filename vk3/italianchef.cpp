#include "italianchef.h"
#include <iostream>
ItalianChef::ItalianChef()
{
   // cout << "Olen Italiadefaultkonstruktorissa!" << endl;
}

ItalianChef::ItalianChef(string cN)
{
   // cout << "Olen Italinputkonstruktorissa!" << endl;
    chefName = cN;
}

ItalianChef::~ItalianChef()
{
    //cout << "Olen Italiadefaultkonstruktorissa!" << endl;
}

/*Jäsenfunktio askSecret() tarkistaa onko parametrinä annettu salasana ok,
 *  ja jos on, kutsuu makePizza()-jäsenfunktiota.
 *   Muut parametrit ovat ainesten eli jauhojen (flour) ja veden (water) määrä.
 *   Funktio palauttaa true/false sen mukaan oliko salasana oikea.
*/
bool ItalianChef::askSecret(string pw, int amountOfWater, int amountOfFlour)
{
    if(pw.compare(password)==1) return false;
    int numberOfPizzas;
    water = amountOfWater;
    flour = amountOfFlour;
    numberOfPizzas = makePizza();
    cout << "Saatiin tehtyä: " << numberOfPizzas << " pizzaa" << endl;
    return true;
}

int ItalianChef::makePizza()
{
    int portions = std::min(flour/ 5, water/ 5);
    cout << "Tehdään pizzaa!" << endl;
    cout << "Jauhoja on: " << flour << " ja vettä on: " << water << endl;
    return portions;
}
