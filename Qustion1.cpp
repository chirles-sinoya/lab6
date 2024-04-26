#include <iostream>
#include <string>

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Dynamically allocate a string
    std::string* dynamicString = new std::string;

    // Prompt user for input
    std::cout << "Enter an integer value: ";
    std::cin >> *dynamicInt;

    std::cout << "Enter a string value: ";
    std::cin.ignore(); // Ignore newline character left in the buffer
    std::getline(std::cin, *dynamicString);

    // Output the dynamically allocated values
    std::cout << "Dynamically allocated integer value: " << *dynamicInt << std::endl;
    std::cout << "Dynamically allocated string value: " << *dynamicString << std::endl;

    // Clean up memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
