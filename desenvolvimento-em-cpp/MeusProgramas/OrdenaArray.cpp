#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int length = 6;
    int numeros[length];

    int numero;
    int indiceDoNumero;

    cout << "Entre com os seis números: " << endl;

    // insere os numeros no array
    for (int i = 0; i < length; i++)
    {
        cin >> numero;

        indiceDoNumero = i;

        // busca a posição ordenada do numero de entrada
        if (indiceDoNumero != 0)
        {
            while ((indiceDoNumero > 0) && (numeros[indiceDoNumero - 1] > numero))
            {
                numeros[indiceDoNumero] = numeros[indiceDoNumero - 1];
                indiceDoNumero--;
            }
        }

        numeros[indiceDoNumero] = numero;
    }

    cout << "Array ordenado: " << endl;
    for (int j = 0; j < length; j++)
    {
        cout << numeros[j] << endl;
    }
}
