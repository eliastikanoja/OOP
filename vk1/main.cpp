#include <iostream>

using namespace std;

// funktion prototyyppi
int game(int maxnum);
int main()
{
    int arvausten_lkm = 0;
    int maxnum = 40;
    arvausten_lkm = game(maxnum);
    cout << "Arvauksia: "
         << arvausten_lkm
         << endl
        ;
    return 0;
}

int game (int maxnum) {
    int arvausten_lkm = 0;
    int satunnaisluku = 0;
    int arvaus = 0;
     cout << "Maxnum="
          << maxnum
          << endl;

     // Arvotaan satunnainen luku
     srand(time(NULL));
satunnaisluku = rand() % maxnum;
while (true) {

    //kysytään pellaajalta lukua
    cout << "Arvaa luku? "
         << endl;
    cin >> arvaus;
    arvausten_lkm++;

    //tarkistetaan arvaus=jos se on yhtäsuuri kuin kokonaisluku
    if (arvaus == satunnaisluku) {
        cout << "Oikea arvaus!"
             << endl;
    break;
}

    //tarkistetaan arvaus=jos se on on pienempi kuin kokonaisluku
    if (arvaus < satunnaisluku) {
        cout << "Luku on suurempi"
             << endl;
    }

    //tarkistetaan arvaus=jos se on suurempi kuin kokonaisluku
    if (arvaus > satunnaisluku) {
        cout << "Luku on pienempi"
             << endl;
    }

}
return arvausten_lkm;
}
