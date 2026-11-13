#include <iostream>
using namespace std;

int main()
{
    int a[5] = {5, 6, 8, 4, 9};
    int temp;

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4-i; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j]= a[j+1];
                a[j+1] = temp;
            }
        }
    }

    cout << "Sorted array: ";

    for (int i=0; i<5; i++)
        cout << a[i] << " ";

    return 0;
}