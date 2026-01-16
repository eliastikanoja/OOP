#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

game::game(int mN)
{
    // cout << "Peli luotu" << endl;
    maxNumber = mN;
}

game::~game()
{
    // cout << "Peli tuhottu" << endl;
}

void game::play()
{
   // cout << "Pelissa" << endl;

    srand(time(NULL));
    randomNumber = (rand()%maxNumber)+1;
    while (true) {
        cout << "Anna arvaus (1-" << maxNumber << "): ";
        cin >> playerGuess; // Kysytään pelaajalta luku
        numOfGuesses++;
  //  cout << "maxNumber: " << maxNumber << endl << "randomNumber: " << randomNumber << endl;



    //tarkistetaan arvaus=jos se on yhtäsuuri kuin kokonaisluku
    if (playerGuess == randomNumber) {
        cout << "Oikea arvaus! Peli loppui" << endl;
        break;
    }

    //tarkistetaan arvaus=jos se on on pienempi kuin kokonaisluku
    if (playerGuess < randomNumber) {
        cout << "Luku on suurempi" << endl;
    }

    //tarkistetaan arvaus=jos se on suurempi kuin kokonaisluku
    if (playerGuess > randomNumber ) {
        cout << "Luku on pienempi" << endl;
    }

}
}



void game::printGameResult()
{
   // cout << "Tulostuksessa" << endl;
    cout << "Oikea luku oli: " << randomNumber << endl << "Arvauksia: " << numOfGuesses << endl;
}
