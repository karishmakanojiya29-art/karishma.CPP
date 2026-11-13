#include <iostream>
using namespace std;

class Oops
{
    public:
    int o = 95;
};

class Maths
{
    public:
    int m = 75;
};

class Result : public Oops, public Maths
{
    public:
    void display()
    {
        cout << "Oops Marks: " << o<< endl;
        cout << "Maths Marks: " << m << endl;
        cout << "Total Marks: " << o + m << endl;
    }
};

int main()
{
    Result r;
    r.display();

    return 0;
}