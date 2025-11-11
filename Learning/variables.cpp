#include <iostream>

using std::cout;
typedef unsigned short int ushort;


void byteOverflow() {
    ushort largest = 65535;
    cout << largest << std::endl;
    largest++;
    signed short smallest = largest;
    cout << largest << " " << smallest << std::endl;
    largest++; 
    smallest++;
    cout << largest << " " << smallest << std::endl;
    largest--;
    smallest--;
    cout << largest << " " << smallest << std::endl;
    largest--;
    smallest--;
    cout << largest << " " << smallest << std::endl;
}

void userInput () {
    int myArr[10];
    for (int i = 0; i < (sizeof(myArr) / sizeof(myArr[0])); i++) {
        std::cout << "Index " << i << "= ";
        std::cin >> myArr[i];
    }
    for (int i = 0; i < (sizeof(myArr) / sizeof(myArr[0])); i++) {
        std::cout << myArr[i] << std::endl;
    }
}

void arrays() {
    int myArr1[10]; // C-style array
    std::array<int, 10> myArr2; // static-length array C++ style
    std::vector<int> myArr3; // variable-length array C++ style

    cout << "ARRAYS FUNCTION" << std::endl;

    for (int i = 0; i < (sizeof(myArr1)/sizeof(myArr1[0])); i++) {
        // prints whatever was stored in myArr (or garbage data if we don't call userInput function):
        std::cout << i << ": " << myArr1[i] << std::endl;
    }
    cout << std::endl;
    for (int i = 0; i < myArr2.size(); i++) {
        std::cout << i << ": " << myArr2[i] << std::endl; // prints garbage data
    }
    cout << std::endl;
    for (int i = 0; i < myArr3.size(); i++) {
        std::cout << i << ": " << myArr3[i] << std::endl; // prints nothing bc myArr3 has size 0
    }

    // initialize the arrays:
    // myArr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // can't do this because C-style arrays MUST BE INITIALIZED AT DECLARATION
    myArr2 = {1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
    myArr3 = {0, 1, 2, 3};

    for (int i = 0; i < (sizeof(myArr1)/sizeof(myArr1[0])); i++) {
        // prints whatever was stored in myArr (or garbage data if we don't call userInput function):
        std::cout << i << ": " << myArr1[i] << std::endl;
    }
    cout << std::endl;
    for (int i = 0; i < myArr2.size(); i++) {
        std::cout << i << ": " << myArr2[i] << std::endl; // prints garbage data
    }
    cout << std::endl;
    for (int i = 0; i < myArr3.size(); i++) {
        std::cout << i << ": " << myArr3[i] << std::endl; // prints nothing bc myArr3 has size 0
    }
    myArr3.push_back(4);
    cout << std::endl;
    for (int i = 0; i < myArr3.size(); i++) {
        std::cout << i << ": " << myArr3[i] << std::endl; // prints nothing bc myArr3 has size 0
    }
}

int main() {

    int a = 2, b = 3, c = 4;
    float d = 5.1, e = 6.0;
    cout << a << b << c << a+b << std::endl;
    cout << d << e << std::endl; // prints floats as int if no floating point part

    byteOverflow();
    // userInput();
    arrays();

    return 0;
}