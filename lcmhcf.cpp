#include <iostream>
using namespace std;

int main()
{
    int a=12;
    int b=18;
    int x=a, y=b, r;

    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }

    int hcf = x;
    int lcm = (a * b) / hcf;

    cout << "HCF = " << hcf << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
    
}