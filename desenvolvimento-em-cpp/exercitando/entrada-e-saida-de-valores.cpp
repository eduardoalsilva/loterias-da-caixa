#include <iostream>

int main()
{
    int number1;
    int number2;

    std::cout << "Entre com o primeiro numero: \n";
    std::cin >> number1;

    std::cout << "Entre com o segundo número: \n";
    std::cin >> number2;

    std::cout << "Os números " << number1 << " e " << number2 << " são iguais: " << (number1 == number2) << std::endl;

    return 0;
}