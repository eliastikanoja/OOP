#include <iostream>
#include "chef.h"
#include "italianchef.h"
#include <string>
using namespace std;

int main()
{
    string kokinNimi;
    Chef kokki_1("Jarkko");
    kokinNimi =  kokki_1.getName();
    cout << "Main: kokinNimi on " << kokinNimi << endl;
    kokki_1.makeSalad(10);
    kokki_1.makeSoup(20);


    string kokinNnimi;
    ItalianChef it_kokki_2(" Italian Jari");
    kokinNnimi =  it_kokki_2.getName();
    cout << "Main: kokinNimi on " << kokinNnimi << endl;
    it_kokki_2.makeSalad(12);
    it_kokki_2.makeSoup(7);

    it_kokki_2.askSecret("ok", 5, 5);

    return 0;
}
