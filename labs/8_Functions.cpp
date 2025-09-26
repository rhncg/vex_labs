#include <iostream>

/* Functions allow us to encapsulate a block of code and reuse it multiple times throughout our program.
   They help in organizing code, improving readability, and reducing redundancy.

    This is the structure of the declaration of a function:

    returnType functionName(parameter(s), ...) {
        // code to be executed
        return value; (if returnType is not void)
    }

    To call a function, we simply use its name followed by parentheses, passing any required arguments.

    functionName(argument(s), ...);
*/

// Example function that adds two integers and returns the result
int add(int a, int b) {
    return a + b;
}



// int main() is also a function, but it is a special function where the program starts executing
int main() {
    // we can call and print the result of the add function
    std::cout << add(3, 5) << std::endl; // Outputs: 8

    // We can store the result of the function in a variable
    int sum = add(10, 20);
    std::cout << "Sum: " << sum << std::endl; // Outputs: Sum: 30
    
    // Lab 8: Create a function that takes two bool parameters and returns true only if both parameters are NOT true
    // Call the function with different combinations of true and false and print the results


    return 0;
}