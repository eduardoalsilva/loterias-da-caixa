#include <iostream>

int main()
{
    int number1;
    int number2;
    int result;

    std::cout << "Entre com os dois valores: \n";
    std::cin >> number1;
    std::cin >> number2;

    result = number1 + number2;
    std::cout << number1 << " + " << number2 << " = " << result << "\n";
    
    result = number1 - number2;
    std::cout << number1 << " - " << number2 << " = " << result << "\n";

    result = number1 * number2;
    std::cout << number1 << " x " << number2 << " = " << result << "\n";

    result = number1 / number2;
    std::cout << number1 << " / " << number2 << " = " << result << "\n";

    return 0;
}