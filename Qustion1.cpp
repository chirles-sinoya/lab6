#include <iostream>
#include <string>
using namespace std;


int main() {
    //  allocate an integer dynamically
    int* dynamicInt = new int;

    
    string* dynamicString = new std::string;

    // Prompt user for input
    cout << "Enter an integer value: ";
    cin >> *value;

    cout << "Enter a string : ";
    cin.delete();  
    getline(std::cin, *dynamicString);

    cout << "Dynamically allocated integer value: " << *dynamicInt << std::endl;
    cout << "Dynamically allocated string value: " << *dynamicString << std::endl;

    // Clear used mwmory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
