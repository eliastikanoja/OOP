#include <iostream>

using namespace std;

// funktion prototyyppi
double keskiarvo(double taulukko[4]);
int main()
{
    /*
    int num = 123;
    float pi = 3.14;
    string hello = "Hello Pi: " ;

    double luvut[4];

    cout << hello << pi << " " << num << endl;
    cout << "Hello:n pituus " << hello.length() << endl;
*/
    double luvut[4] = {8.34, 63.34, 11.0, 5.6};
    double ka = keskiarvo(luvut);
    cout << "keskiarvo on " << ka << endl;
    cout << "keskiarvo on " << keskiarvo(luvut) << endl;

    return 0;
}

double keskiarvo (double taulukko[4])
{
    double tulos = 0.0;
    for (int i=0; i < 4; i++) {
        tulos += taulukko[i];
    }
    tulos = tulos / 4.0;
    return tulos;
}
