#include <iostream>

/* Boolean expressions are used to make decisions in code.
    They evaluate to either true or false.

    Common Boolean Operators:
    - == : Equal to
    - != : Not equal to
    - <  : Less than
    - >  : Greater than
    - <= : Less than or equal to
    - >= : Greater than or equal to
    - && : Logical AND
    - || : Logical OR
    - !  : Logical NOT

    Examples:
    (5 == 5)      // true
    (3 != 4)      // true
    (2 < 3)       // true
    (4 > 5)       // false
    (3 <= 3)      // true
    (5 >= 6)      // false

    (true && false) // false
    (true || false) // true
    (true || true)  // true
    (!true)         // false
    (!false)       // true
*/

int main() {
    // We can print a boolean expression directly
    std::cout << "You are reading this text: " << (true || false) << std::endl;
    std::cout << "5 is greater than 3: " << (5 > 3) << std::endl;

    // Lab 4: Create and print the results of the following boolean expressions

    // 1. Check if 10 is equal to 10


    // 2. Check if 7 is not equal to 8


    // 3. Check the result of true AND false


    // 4. Check the result of (5 is less than 3) OR (2 is less than 4)


    // 5. Check the result of NOT (3 is greater than 1)


    return 0;
}