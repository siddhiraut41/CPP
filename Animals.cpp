//Create class methods
#include <iostream>
using namespace std;
class Animals {
public:
    void method1()
    {
        cout << "Animal\n";
    }

    void method2()
    {
        cout << "Dog\n";
    }

    void method3(int Age)
    {
        cout << "Average age is: " << Age << "\n";
    }
};

int main()
{
    // creating object
    Animals obj;

    // calling methods
    obj.method1();
    obj.method2();
    obj.method3(12);

    return 0;
}