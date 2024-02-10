#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

void outputVector(vector <int> &);
void inputVector(vector <int> &);
void sortVector(vector <int> &);

int main()
{
    const int length = 6;
    vector <int> numeros(length);
    
    cout << "O tamanho do vetor numeros é " << numeros.size() << endl;

    cout << "Entre com 6 números" << endl;
    inputVector(numeros);
    sortVector(numeros);
    outputVector(numeros);
    return 0;
}

void outputVector(vector <int> &array)
{
    size_t i;

    for (i = 0; i < array.size(); i++)
    {
        cout << array[i] << endl;
    }
}

void inputVector(vector<int> &array)
{
    for (size_t i = 0; i < array.size(); i++)
        cin >> array[i];

}

void sortVector(vector<int> &array)
{
    int indiceDoNumero;

    for (size_t i = 0; i < array.size(); i++)
    {
        
        indiceDoNumero = i;
        if (indiceDoNumero != 0)
        {
            int item = array[indiceDoNumero];
            while ((indiceDoNumero > 0) && (array[indiceDoNumero - 1] > item))
            {
                array[indiceDoNumero] = array[indiceDoNumero - 1];
                indiceDoNumero--;
            }            

            array[indiceDoNumero] = item;
        }
    }
}