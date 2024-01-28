#include <iostream>
using namespace std;

int main()
{
    char string1[20]; // reserva 20 caracteres
    char string2[] = "string literal"; // reserva 15 caracteres
    char string3[20];

    cout << "Enter the string \"hello there\": ";
    cin >> string1; // lê "hello" [o espaço termina a entrada]
    cin >> string3;
    
    cout << "string1 is: " << string1 << "\nstring3 is: " << string3;

    // cout << "\nstring1 with spaces between characters is: \n";

    // for (int i = 0; string1[i] != '\0'; i++)
    //     cout << string1[i] << ' ';

    // cin >> string1; // lê "there"
    // cout << "\nstring1 is: " << string1 << endl;

    return 0;
}