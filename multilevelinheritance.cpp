#include <iostream>
using namespace std;

class Person
{
public:
    void showName()
    {
        cout << "Name: Rahul" << endl;
    }
};

class Student : public Person
{
public:
    void showRoll()
    {
        cout << "Roll No: 102" << endl;
    }

};

class Result : public Student
{
public:
    void showMarks()
    {
        cout << "Marks: 85" << endl;
    }
};

int main()
{
    Result r;
    r.showName();
    r.showRoll();
    r.showMarks();

    return 0;
}

