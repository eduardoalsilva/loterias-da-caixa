#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    int n[10] = {32, 27, 64, 18, 95, 23, 45, 12};
    const int arraySize = 10;
    int s[arraySize];

    cout << "Element for n" << setw(13) << "Value" << endl;

    for(int j = 0; j < 10; j++)
        cout << setw(7) << j << setw(13) << n[j] << endl;

    cout << "Element for s" << setw(13) << "Value" << endl;

    for(int j = 0; j < 10; j++)
        cout << setw(7) << j << setw(13) << s[j] << endl;

    return 0;
}