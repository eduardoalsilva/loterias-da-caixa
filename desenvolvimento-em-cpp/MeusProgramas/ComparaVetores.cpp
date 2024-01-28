#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
    int length = 5;
    int indice = 0;
    int numero;
    int aposta[length];
    int sorteio[length];
    bool numeroNaoPresente = true;
    
    cout << "Entre com 5 números de 1 a 20: " << endl;
    while (indice != length)
    {
        numeroNaoPresente = true;
        cin >> numero;
        if ((numero > 20) || (numero < 1))
        {
            cout << "Por favor entre com um número de 1 a 20" << endl;
            continue;
        }
        for (int i = 0; i < indice; i++)
        {
            if (numero == aposta[i])
            {
                cout << "Esse número já está presente na aposta. Escolha outro!" << endl;
                numeroNaoPresente = false;
                break;
            }
        }

        if (numeroNaoPresente)
        {
            aposta[indice] = numero;
            indice++;
        }
    }

    cout << "Sorteio: " << endl;

    srand(time(0));
    for(int i = 0; i < 5; i++)
    {
        sorteio[i] = 1 + rand() % 20;
        cout << sorteio[i] << endl;
    }

    cout << "Comparando números: " << endl;
    cout << "Acertos: ";

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(aposta[j] == sorteio[i])
            {
                cout << aposta[j] << endl;
            }
        }
    }

    return 0;
}