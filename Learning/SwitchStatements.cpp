#include <iostream>

int main() {

    int userIn;
    std::cout << "Pick a number between 1 and 5: ";
    std::cin >> userIn;
    std::cout << std::endl;
    switch (userIn) { // without break; statements, cases will fall through to the next line (it'll keep going till it sees a break)
        case 1: std::cout << "You picked 1"; break;
        case 2: std::cout << "You picked 2"; break;
        case 3: std::cout << "You picked 3"; break;
        case 4: std::cout << "You picked 4"; break;
        case 5: std::cout << "You picked 5"; break;
        default: std::cout << "That's outside the range of values."; break;
    }
    std::cout << std::endl;

    return 0;
}