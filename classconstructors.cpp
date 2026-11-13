#include <iostream>
using namespace std;

class Time
{
    int hrs, min, sec;

public:
    Time()
    {
        hrs = 0;
        min = 0;
        sec = 0;
    }

    Time(int h, int m, int s)
    {
        hrs = h;
        min = m;
        sec = s;
    }

    Time(const Time &t)
    {
        hrs = t.hrs;
        min = t.min;
        sec = t.sec;
    }

    void display()
    {
        cout << hrs << ":" << min << ":" << sec << endl; 
    }

    ~Time()
    {
        // Destructor
    }

};

int main()
{
    Time t1;
    Time t2(20, 30, 55);
    Time t3(t2);

    t1.display();
    t2.display();
    t3.display();

    return 0;

}