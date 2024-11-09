#include <iostream>
#include <cmath>

int main() {
    double side_A;
    double side_B;

    std::cout << "Digite o primeiro cateto: " << "\n";
    std::cin >> side_A;

    std::cout << "Digite o segundo cateto: " << "\n";
    std::cin >> side_B;
    
    double hypotenusa = sqrt(pow(side_A, 2) + pow(side_B, 2));
    std::cout << "Hipotenusa: " << hypotenusa << "\n";

    return 0;
}