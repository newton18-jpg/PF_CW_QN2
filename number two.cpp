#include <iostream>
#include <vector>

void printDivisors(int number) {
    std::vector<int> divisors;

    // Find all divisors of the number given
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            divisors.push_back(i);
        }
    }

    // Print divisors in decreasing order
    std::cout << "Divisors of " << number << " in decreasing order:\n";
    for (int i = divisors.size() - 1; i >= 0; --i) {
        std::cout << divisors[i] << std::endl;
    }
}

int main() {
    int number;
    char choice;

    std::cout << "Welcome to the Divisor Finder Program!\n";
    std::cout << "You can enter a positive integer to find its divisors.\n";
    std::cout << "To exit the program, enter a negative integer or zero.\n";

    do {
        std::cout << "Please enter a positive integer: ";
        std::cin >> number;

        // Check if the input is valid
        if (number <= 0) {
            std::cout << "Input unacceptable. Please enter a positive integer.\n";
            continue; // Prompt the user again
        }

        // Print the divisors
        printDivisors(number);

        // Ask if the user wants to continue
        std::cout << "Would you like to enter another integer? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Thank you for using the Divisor Finder Program. Goodbye!\n";
    return 0;
}

