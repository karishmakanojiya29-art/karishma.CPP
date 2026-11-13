#include <iostream>
#include <string>
using namespace std;

class Student
{
 public:
     int roll_no;
     string name;

     void display()
     {
        cout << roll_no << " " << name << endl;
     }

};

int main()
{
    Student s1, s2, s3;

    s1.roll_no = 2;
    s1.name = "Karishma";

    s2.roll_no = 3;
    s2.name = "Vivek";

    s3.roll_no = 4;
    s3.name = "Jyoti";

    s1.display();
    s2.display();
    s3.display();

    return 0;
}