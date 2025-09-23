#include <iostream>

/* Iteration statements allow us to execute a block of code multiple times. 
    They are very useful in many programming scenarios especially in VEX.

    Common Iteration Statements:
    - for: Repeats a block of code a specified number of times
    - while: Repeats a block of code as long as a specified condition is true

    For Loop Structure:
    for (initialization; condition; increment) {
        // Code to be executed
    }

    Example:
    for (int i = 0; i < 5; i++) {
        std::cout << "Iteration " << i << std::endl;
    }

    While Loop Structure:
    while (condition) {
        // Code to be executed
    }

    Example:
    int count = 0;
    while (count < 5) {
        std::cout << "Count is " << count << std::endl;
        count++;
    }
*/

int main() {
    // For loop example
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += i;
    }
    std::cout << "Sum: " << sum << std::endl;

    // While loop example
    int count = 0;
    while (count < 5) {
        std::cout << "While Loop Count: " << count << std::endl;
        count++;
    }

    // Lab 7: Create and print the results of the following loops

    // 1. Create a for loop that counts from 1 to 10 and prints each number

    
    // 2. Create a while loop that counts down from 10 to 1 and prints each number

    
    return 0;
}