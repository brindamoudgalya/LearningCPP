#include <iostream>
int fibonacci (int end);

int main () {

    // fibonacci:
    int fibval;
    std::cout << "Enter a number to find the fibonacci value of: ";
    std::cin >> fibval;
    std::cout << std::endl << fibonacci(fibval) << " is your fibonacci value at " << fibval << std::endl;
    return 0;
}

int first = 1;
int second = 1;
int fibonacci (int end) {
    // base case
    if (end == 1 || end == 2) {
        return second;
    }
    else {
        int temp = first;
        first = second;
        second += temp;
        return fibonacci (end-1);
    }
}