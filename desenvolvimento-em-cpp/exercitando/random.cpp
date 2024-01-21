#include <iostream>
#include <ctime>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

int main()
{
    srand(time(0));
    for (int counter = 1; counter <= 20; counter ++)
    {

        cout << rand() % 60 + 1 << endl;        
    }

    return 0;
}