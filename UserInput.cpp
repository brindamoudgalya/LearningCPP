#include <iostream>
int withoutReference (int x); // function declaration (now main can call input() even if input() is defined below main in this file)
int& withReference (int& x);

int main() {
    int x;
    std::cout << "Give me a value for x: ";
    std::cin >> x;
    std::cout << std::endl;


    std::cout << "x = " << x << std::endl;
    withoutReference(x);
    std::cout << "Without reference, the value of x doesn't change -- x = " << x << std::endl;
    withReference(x);
    std::cout << "With reference, the value of x changes -- x = " << x << std::endl;

    return 0;
}

int withoutReference (int x) { // modifies a copy of the value of x
    x++;
    return x;
}

int& withReference (int& x) { // modifies the actual value in the actual memory location of x
    x++;
    return x;
}