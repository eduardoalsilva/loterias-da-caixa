// Passagem por referência

#include <iostream>
using std::cout;
using std::endl;

void cubeByReference(int *);

int main()
{
    int number = 6;

    cout << "The original value of number is " << number;
    cubeByReference(&number);

    cout << "\nThe new value of number is " << number << endl;
    return 0;
}

void cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}