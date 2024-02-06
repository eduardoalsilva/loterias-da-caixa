#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    const int arraySize = 10;
    int data[arraySize] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};
    int insert;

    cout << "Unsorted array:\n";

    for (int i = 0; i < arraySize; i++)
        cout << setw(4) << data[i];

    for (int next = 1; next < arraySize; next++)
    {
        insert = data[next]; 
        cout << "\nnext: " << next << endl;
        cout << "insert: " << insert << endl;

        int moveItem = next;
        cout << "moveItem: " << moveItem << endl;


        while (( moveItem > 0 ) && (data[moveItem - 1] > insert))
        {
            cout << "data[moveItem]" << data[moveItem] << endl;
            data[moveItem] = data[moveItem - 1];
            moveItem--;
            cout << "moveItem: " << moveItem << endl;
        }

        data[moveItem] = insert;
    }        
}