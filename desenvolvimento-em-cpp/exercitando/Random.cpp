#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
    int x;

    srand(time(0));
    cout << 1 + rand() % 60 << endl;

    return 0;

}