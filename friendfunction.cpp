#include <iostream>
using namespace std;

class XY;

class AB
{
    int a;

public:
    AB() { a = 10; }

    friend void swapValues(AB &, XY &);
};

class XY
{
    int b;
public:
   XY() { b = 20; }

   friend void swapValues(AB &, XY &);

};

void swapValues(AB &x, XY &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main()
{
    AB obj1;
    XY obj2;

    cout << "Before swapping: 10 20" << endl;
    swapValues(obj1, obj2);
    cout << "After swapping: 20 10" << endl;

    return 0;

}