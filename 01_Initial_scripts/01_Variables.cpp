#include <iostream>

int main() {
    // declaring a variable 
    int x = 10;
    int y = 20;

    int sum = x + y;

    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";
    std::cout << "SUM: " << sum << "\n";

    // Integer (whole number)
    int age = 28;
    int year = 1995;

    //Double (Including decimal)
    double price = 10.99;
    double gpa = 4.1;

    // Char (Single character)
    char grade = 'A';
    char initial = 'G';

    // Bool (True or false)
    bool student = false;
    bool current = true;

    //String
    std::string name = "Giovanni";
    std::cout << "My name is " << name <<" and I'm "<< age << " years old!\n";

    //Constants
    const double PI = 3.14156;
    double radius = 5;
    double circle_length = 2 * PI * radius;
    std::cout << "Circle length: " << circle_length << "\n";

    
    return 0;
}