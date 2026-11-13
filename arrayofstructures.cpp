#include <iostream>
using namespace std;

struct Student
{
    int rollno;
    string name;
    string branch;
};

int main()
{
    Student s[10];

    s[0].rollno = 1;
    s[0].name = "khushi";
    s[0].branch = "BAF";

    cout << "Roll No: " << s[0].rollno << endl;
    cout << "Name: " << s[0].name << endl;
    cout << "Branch: " << s[0].branch << endl;

    return 0;

}