#include "student.h"

student::student(string n, int a)
{
    Name = n;
    Age = a;
}

string student::getName() const
{
    return Name;
}

void student::setName(const string &newName)
{
    Name = newName;
}

int student::getAge() const
{
    return Age;
}

void student::setAge(int newAge)
{
    Age = newAge;
}

void student::printStudentInfo()
{
    cout << "Nimi: " << Name << " Ika: " << Age << endl;
}
