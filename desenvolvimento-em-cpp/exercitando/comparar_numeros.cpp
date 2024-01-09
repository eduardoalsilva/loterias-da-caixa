#include <iostream>

int main()
{
    int number1;
    int number2;

    std::cout << "Entre com os dois valores: \n";
    std::cin >> number1;
    std::cin >> number2;

    if (number1 == number2)
    {
        std::cout << "Os valores são iguais!\n";
    }
    else
    {
        std::cout << "Os valores são diferentes!\n";
    }

    return 0;
}