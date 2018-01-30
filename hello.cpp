#include <iostream> // Author: Logen Thornton
#include <string>

int main() {
    std::string input;
    std::cout<< "Hi, my name is Logen"<< std::endl;
    std::cout << "What's your first name?" << std::endl;
    std::cin >> input;
    std::cout << "Hello, " << input << std::endl;
    return 0;
}
