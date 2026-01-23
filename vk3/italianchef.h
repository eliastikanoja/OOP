#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include "chef.h"
using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string, int, int);
private:
    int water;
    int flour;
    string password;
    int makePizza();
};

#endif // ITALIANCHEF_H
