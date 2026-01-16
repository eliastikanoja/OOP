#include <iostream>
#include "game.h"

using namespace std;

int main() {
    int maxNum (20);
    game peliOlio(maxNum);
    peliOlio.play();
    peliOlio.printGameResult();
    return 0;
}
