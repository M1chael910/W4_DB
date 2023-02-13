/*
 Michael Murphy
 W1 Q4
 2/12/23
 CSC 121
 */

#include <iostream>

using namespace std;

int main() {
    int x = 0;
    int y = 0;

    cout << "\nThe AND operations for x = 0 and y = 0 is " << x && y;
    cout << "\nThe OR operation for x = 0 and y = 0 is " << x || y;
    cout << "\nThe XOR operation for x = 0 and y = 0 is " << (x ^ y);
    cout << "\nThe NAND operation for x = 0 and y = 0 is " << !(x && y);
    // NAND Operator: If one value is false, it returns true
    cout << "\nThe NOR operation for x = 0 and y = 0 is " << !(x || y);
    // NOR Operator: If one value is true, it returns false

    x = 1;
    y = 0;

    cout << "\n\nThe AND operation for x = 1 and y = 0 is " << x && y;
    cout << "\nThe OR operation for x = 1 and y = 0 is " << x || y;
    cout << "\nThe XOR operation for x = 1 and y = 0 is " << (x ^ y);
    cout << "\nThe NAND operation for x = 1 and y = 0 is " << !(x && y);
    cout << "\nThe NOR operation for x = 1 and y = 0 is " << !(x || y);

    x = 0;
    y = 1;

    cout << "\n\nThe AND operation for x = 0 and y = 1 is " << x && y;
    cout << "\nThe OR operation for x = 0 and y = 1 is " << x || y;
    cout << "\nThe XOR operation for x = 0 and y = 1 is " << (x ^ y);
    cout << "\nThe NAND operation for x = 0 and y = 1 is " << !(x && y);
    cout << "\nThe NOR operation for x = 0 and y = 1 is " << !(x || y);

    x = 1;
    y = 1;

    cout << "\n\nThe AND operation for x = 1 and y = 1 is " << x && y;
    cout << "\nThe OR operation for x = 1 and y = 1 is " << x || y;
    cout << "\nThe XOR operation for x = 1 and y = 1 is " << (x ^ y);
    cout << "\nThe NAND operation for x = 1 and y = 1 is " << !(x && y);
    cout << "\nThe NOR operation for x = 1 and y = 1 is " << !(x || y);

    return 0;
}