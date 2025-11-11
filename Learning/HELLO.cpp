#include <iostream>


void hello1() {
    std::cout << "Hello World 1!" << std::endl;
}

std::string hello2 () {
    return ("Hello World 2!");
}

void hello3 (std::string str) {
    std::cout << str << std::endl;
}

void hello3() {
    std::cout << "Hello World 3.2!" << std::endl;
}

// commenting main out bc i reference HELLO.cpp from UserInput.cpp

// int main() {
//     std::cout << "Hello World 0!\n"; 
//     // << basically puts whatever comes after into the stream (output)
//     // std is a namespace and defines a scope for what comes after it
//     // :: says that the next thing is within the scope of the previous thing

//     hello1();
//     std::cout << hello2() << std::endl;
//     hello3("Hello World 3.1!");
//     hello3();

//     return 0;
// }