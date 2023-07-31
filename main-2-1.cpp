#include <string>
#include <iostream>

std::string print_binary_str(std::string);

int main() {
    std::string number = "765";
    std::cout << print_binary_str(number) << std::endl;
    return 0;
}