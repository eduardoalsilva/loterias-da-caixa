#include <iostream>
using std::cout;
using std::endl;

void printCharacters(const char *);

int main()
{
    const char phrase[] = "print characters of a string";

    cout << "The string is:\n";
    printCharacters(phrase);
    cout << endl;
    return 0;
}

void printCharacters(const char *sPtr)
{
    for ( ; *sPtr != '\0'; sPtr++)
        cout << *sPtr;
}