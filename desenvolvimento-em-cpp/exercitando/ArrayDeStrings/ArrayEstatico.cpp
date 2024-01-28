#include <iostream>
using namespace std;

void staticArrayInit(void);
void automaticArrayInit(void);

int main()
{
    cout << "First call to each function:\n";
    staticArrayInit();
    automaticArrayInit();

    cout << "\n\nSecond call to each function: \n";
    staticArrayInit();
    automaticArrayInit();
    cout << endl;

    return 0;
}

void staticArrayInit(void)
{
    static int array1[3];

    cout << "\nValues on entering staticArrayInit:\n";

    for (int i = 0; i < 3; i++)
        cout << "array1[" << i << "] = " << array1[i] << " ";

    cout << "\nValues on exiting staticArrayInit:\n";

    for (int j = 0; j < 3; j++)
        cout << "array1[ " << j << "] = " << ( array1[j] += 5) << " ";
}

void automaticArrayInit(void)
{
    int array2[3] = {1, 2, 3};

    cout << "\n\nValues on entering automaticArrayInit:\n";

    for (int i = 0; i < 3; i++)
        cout << "array2[" << i << "] = " << array2[i] << " ";

    cout << "\nValues on exiting automaticInit:\n";

    for (int j = 0; j < 3; j++)
        cout << "array2[" << j << "] = " << (array2[j] += 5) << " ";

    cout << endl;
}