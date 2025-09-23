#include <iostream>

/* Selection statements allow us to make decisions in code.
    They execute certain blocks of code based on conditions.
    
    Common Selection Statements:
    - if: Executes a block of code if a specified condition is true.
    - else if: Specifies a new condition to test if the first condition is false.
    - else: Executes a block of code if all previous conditions are false.
    - switch: Selects one of many blocks of code to be executed based on the value of a variable.
    
    Example:
    if (condition1) {
         // Code to execute if condition1 is true
    } else if (condition2) {
         // Code to execute if condition2 is true
    } else {
         // Code to execute if both conditions are false
    }
    
    switch (variable) {
         case value1:
              // Code to execute if variable == value1
              break;
         case value2:
              // Code to execute if variable == value2
              break;
         default:
              // Code to execute if variable doesn't match any case
    }
*/

int main() {
    // We can directly check conditions in an if statement
    if (5 == 5) {
        std::cout << "5 is equal to 5" << std::endl;
    }

    // We can put booleans in as conditions
    bool someCondition = true;
    if (someCondition) {
        std::cout << "someCondition is true" << std::endl;
    } else {
        std::cout << "someCondition is false" << std::endl;
    }

    // We can check the value of strings
    std::string color = "red";
    if (color == "blue") {
        std::cout << "The color is blue" << std::endl;
    } else if (color == "red") {
        std::cout << "The color is red" << std::endl;
    } else {
        std::cout << "The color is neither red nor blue" << std::endl;
    }

    // Switch statements can be used for multiple discrete values
    // You probably won't be using these as often as if/else statements,
    // but they're still really useful
    int dayOfWeek = 3;
    switch (dayOfWeek) {
        case 1:
            std::cout << "It's Monday" << std::endl;
            break;
        case 2:
            std::cout << "It's Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "It's Wednesday" << std::endl;
            break;
        default:
            std::cout << "It's another day" << std::endl;
            break;
    }

    // Lab 5: Create the following selection statements

    int num1 = 10;
    // 1. Print "positive" if num1 is positive, 
    // "negative" if num1 is negative,
    // and "zero" if num1 is equal to 0

    // 2. Create a switch statement that prints the name of the month
    // based on the value of an integer variable month (1-12)


    return 0;
}