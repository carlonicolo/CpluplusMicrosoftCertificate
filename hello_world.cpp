/*
 * Personal Introduction Program
 * Created by: Karlitos
 * Date: 18/01/2026
 * 
 * Description: This program displays personal information 
 * about myself in a formatted way on the console.
 */

// Include necessary header
#include <iostream>

int main() {
    // Display header
    std::cout << "====================================" << std::endl;
    std::cout << "       PERSONAL INTRODUCTION        " << std::endl;
    std::cout << "====================================" << std::endl;
    
    // Display basic info
    std::cout << "Name: Karlitos" << std::endl;
    std::cout << "Role: Dev" << std::endl;

    // Educational background section
    std::cout << "\nEDUCATION" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Degree: [Your Degree/Field of Study]" << std::endl;
    std::cout << "School: [Your School/University]" << std::endl;
    std::cout << "Year: [Graduation Year]" << std::endl;

    // Career goals section
    std::cout << "\nCAREER GOALS" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Short-term: [Your Short-term Goal]" << std::endl;
    std::cout << "Long-term: [Your Long-term Goal]" << std::endl;
    
    // Display footer
    std::cout << "====================================" << std::endl;
    
    return 0;
}