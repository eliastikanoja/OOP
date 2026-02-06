#include <iostream>
#include <memory>
#include "seuraaja.h"
#include "notifikaattori.h"
using namespace std;

int main()
{

    Notifikaattori n;

    Seuraaja* A = new Seuraaja("Tapeli");
    Seuraaja* B = new Seuraaja("Bapeli");
    Seuraaja* C = new Seuraaja("Capeli");

    n.lisaa(A);
    n.lisaa(B);
    n.lisaa(C);

    n.tulosta();
    n.postita("Hei");
    n.poista(B);
    n.postita("Hei taas");


    return 0;
}
