#include <iostream>
#include <string>

int main() {
    // Dynamically allocate an integer
    int* pInt = new int;

    // Dynamically allocate a string
    std::string* pString = new std::string;

    // Prompt the user and assign a value to the dynamically allocated integer
    std::cout << "Enter an integer value: ";
    std::cin >> *pInt;

    // Clear the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>max(), '\n');

    // Prompt the user and assign a value to the dynamically allocated string
    std::cout << "Enter a string: ";
    std::getline(std::cin, *pString);

    // Output the values onto the console
    std::cout << "The value of the dynamically allocated integer is: " << *pInt << std::endl;
    std::cout << "The value of the dynamically allocated string is: " << *pString << std::endl;

    // Clean up the dynamically allocated memory
    delete pInt;
    delete pString;

    return 0;
}
