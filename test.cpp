#include <iostream>
#include <cmath>  // for M_PI

int main() {
    double radius;
    std::cout << "Enter the radius: ";
    std::cin >> radius;

    if (std::cin.fail()) {
        std::cerr << "Invalid input! Please enter a valid number for the radius." << std::endl;
        return 1; // Exit with an error code
    }

    double volume = (4.0/3.0) * M_PI * std::pow(radius, 3);
    std::cout << "The volume of the sphere is: " << volume << std::endl;

    return 0;
}
