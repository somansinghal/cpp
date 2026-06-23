#include <iostream>
#include <string>

int main() {
    std::string name;
    int marks;

    std::clog << "Requesting student name." << std::endl;
    std::cout << "Enter student name: ";
    std::getline(std::cin, name);

    std::clog << "Requesting student marks." << std::endl;
    std::cout << "Enter student marks (0-100): ";
    std::cin >> marks;

    if (!std::cin || marks < 0 || marks > 100) {
        std::cerr << "Error: Marks must be an integer between 0 and 100." << std::endl;
        return 1;
    }

    std::clog << "Displaying student details." << std::endl;
    std::cout << "Student Name: " << name << std::endl;
    std::cout << "Student Marks: " << marks << std::endl;
    return 0;
}
