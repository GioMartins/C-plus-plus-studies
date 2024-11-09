#include <iostream>

namespace first {
    int x = 1;
}

int main() {
    int x = 0;
    std::cout << "X value: " << x << "\n";
    std::cout << "X namespace value: " << first::x << "\n";
    return 0;
}