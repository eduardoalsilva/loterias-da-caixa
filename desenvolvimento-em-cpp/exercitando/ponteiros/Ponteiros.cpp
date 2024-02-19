#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    cout << "The Adress of a is " << &a
    << "\nThe value of aPtr is " << aPtr
    << "\n\nThe value of a is " << a
    << "\nThe value of *aPtr is " << *aPtr
    << "\n\nShowing that * and & are inverse of "
    << "\neach other. \n&*aPtr = " << &*aPtr
    << "\n*&aPtr = " << *&aPtr << endl;
    return 0;
}