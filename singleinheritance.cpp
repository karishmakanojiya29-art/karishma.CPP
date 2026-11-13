#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
   int emp_id;
   string name;

   void get1()
   {
    cout << "Enter ID and name: ";
    cin >> emp_id >> name;
   }

   void put1()
   {
    cout << "ID: " << emp_id << endl;
    cout << "Name: " << name << endl;
   }

};

class Fitness : public Employee
{
public:
      int height, weight;
      void get2()
      {
        cout << "Enter height and weight:";
        cin >> height >> weight;
      }

      void put2()
      {
        cout << "Height: " << height << endl;
        cout << "Weight: " << weight << endl;
      }
};

int main()
{
    Fitness f;
    f.get1();
    f.get2();
    f.put1();
    f.put2();

    return 0;

}