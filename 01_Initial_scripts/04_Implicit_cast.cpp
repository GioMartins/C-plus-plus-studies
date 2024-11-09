#include <iostream>

int main() {
    // Implicit casting
    double x = (int) 3.14;
    char word = 100;
    int correct = 8;
    int questions = 10;
    double score = ((double) correct / (double) questions) * 100;


    std::cout << "X value: " << x << "\n";
    std::cout << "Word value in ASC II Table: " << word << "\n";
    std::cout << "Accuracy: " << score << "%\n";

    return 0;
}