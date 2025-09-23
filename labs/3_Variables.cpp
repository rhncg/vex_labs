#include <iostream>

/* Common C++ variable types:
   - int: Integer type (whole numbers)
   - float: Floating point type (numbers with decimals)
   - double: Double precision floating point type (numbers with more decimals)
   - bool: Boolean type (true or false)
   - char: Character type (single characters)
   - std::string: String type (text)

   Variable Construction:
   <type> <name> = <value>;
   Example: int age = 16;
*/

int main() {
    // This is an integer variable
    int number = 67;

    // We can print variables to the console
    std::cout << "Integer value: " << number << std::endl;

    // This is a floating point variable
    float pi = 3.14f; // the 'f' tells it that its a float, but it's optional because it's converted automatically
    std::cout << "Float value: " << pi << std::endl;

    // This is a double precision floating point variable
    double precisePi = 3.141592653589793;
    std::cout << "Double value: " << precisePi << std::endl;

    // This is a boolean variable
    bool doingLab = true;
    std::cout << "Boolean value: " << doingLab << std::endl; // prints 1 for true, 0 for false

    // This is a character variable
    char chemGrade = 'A'; // Notice the single quotes
    std::cout << "Char value: " << chemGrade << std::endl;

    // This is a string variable
    std::string greeting = "this this so fun i'm having so much fun"; // Notice the double quotes
    std::cout << "String value: " << greeting << std::endl;

    // Lab 3: Create and print variables of each type listed above

    // 1. Create an int variable that holds the year you were born and print it


    // 2. Create a float variable that holds 4 digits of e (2.718) and print it


    // 3. Create a double variable that holds 10 digits of e (2.7182818284) and print it


    // 4. Create a bool variable that holds whether or not you're going to win worlds and print it


    // 5. Create a char variable that holds the second letter of your name and print it

    
    // 6. Create a string variable that holds your full name and print it


    return 0;
}