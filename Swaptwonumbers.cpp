// Swap two nubers
#include <iostream>
using namespace std;

int main()
{
    int a = 40, b = 60, temp;

    cout << "Before Swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After Swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}