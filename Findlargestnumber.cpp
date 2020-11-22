// Find largest number among three numbers
#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter Three Numbers: ";
    cin >> n1 >> n2 >> n3;

    if((n1 >= n2) && (n1 >= n3))
        cout << "Largest number is: " << n1;
    else if ((n2 >= n1) && (n2 >= n3))
        cout << "Largest number is: " << n2;
    else
        cout << "Largest number is: " << n3;
    return 0;
}