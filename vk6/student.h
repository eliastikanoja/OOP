#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class student
{
public:
    student(string n, int a);

    string getName() const;
    void setName(const string &newName);
    int getAge() const;
    void setAge(int newAge);
    void printStudentInfo();

private:
    string Name;
    int Age;
};

#endif // STUDENT_H
