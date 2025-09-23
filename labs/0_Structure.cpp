// We will begin by learning the structure of a C++ program.
// This will be slightly different when we start using PROS, but many of the concepts will be the same

// We always start the file with libraries we want to include
// To do this we type #include <libraryName>

#include <iostream> // This library allows us to print text to the console

// Every C++ program must have a main function
// This is where the program starts running
// Don't worry about functions yet, we'll get to them later

int main() {
    // std::cout is used to print text to the console
    // std::endl is used to end the line and move to the next line
    std::cout << "Hello World!" << std::endl;

    return 0; // This tells the program that it ended successfully
}