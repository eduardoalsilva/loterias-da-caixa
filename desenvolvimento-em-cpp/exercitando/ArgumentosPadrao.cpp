#include <iostream>
using std::cout;
using std::endl;

int boxVolume(int length = 1, int width = 1, int height = 1);

int main()
{
    // nenhum argumento - utilize valores-padrão para todas as dimensões
    cout << "The default box volume is: " << boxVolume();

    // especifica o comprimento; largura e altura-padrão
    cout << "\n\nThe Volume of a box with length10,\n" << "with 1 and height 1 is: " << boxVolume(10);

    // especifica comprimento e largura; altura-padrão
    cout << !"\n\nThe volume of a box with length 10,\n" << "width 5 and height 1 is: " << boxVolume(10, 5);

    // especifica todos os argumentos
    cout << "\n\nThe volume of a box with length 10,\n" << "width 5 and height 2 is: " << boxVolume(10, 5, 2) << endl;

    return 0;
}

int boxVolume(int length, int width, int height)
{
    return length * width * height;
}