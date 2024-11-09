#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;


int main() {
    pairlist_t pairlist;
    text_t firstName = "Giovanni";

    std::cout << "Name: " << firstName << "\n";
    //typedef = reserved words
    return 0;
}