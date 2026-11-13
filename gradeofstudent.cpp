#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter the grade (1-5): ";
    cin >> grade;

    switch (grade)
    {
        case 1:
            cout << "Grade: A" << endl;
            break;
        case 2:
            cout << "Grade: B" << endl;
            break;
        case 3:
            cout << "Grade: C" << endl;
            break;
        case 4:
            cout << "Grade: D" << endl;
            break;
        case 5:
            cout << "Grade: F" << endl;
            break;
        default:
            cout << "Invalid grade " << endl;
    }

    return 0;
}