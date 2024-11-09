#include <iostream>

int main() {
    std::string name;
    std::string full_name;


    std::cout << "Whats your name?" << "\n";
    std::cin >> name;
    
    std::cout << "Whats your full name?" << "\n";
    std::getline(std::cin >> std::ws, full_name);
    
    std::cout << "Hello " << name << ".\n";
    std::cout << "Hello " << full_name << ".\n";


    return 0;
}