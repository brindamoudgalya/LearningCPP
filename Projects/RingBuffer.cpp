// test
#include <iostream>

const int numElements = 16;

void ringBuffer();
void pushElement(int val, int (& buf)[numElements], int& wPtr, int& rPtr, bool& isFull);
int popElement(int (& buf)[numElements], int& wPtr, int& rPtr, bool& isFull);


int main() {
    ringBuffer();
    return 0;
}

void ringBuffer() {
    int buf[numElements] = {0}; // initializing everything to 0 so it's not garbage data
    bool isFull = false;
    int wPtr = 0;
    int rPtr = 0;

    pushElement (1, buf, wPtr, rPtr, isFull);
    pushElement (2, buf, wPtr, rPtr, isFull);
    pushElement (3, buf, wPtr, rPtr, isFull);
    pushElement (4, buf, wPtr, rPtr, isFull);
    pushElement (5, buf, wPtr, rPtr, isFull);
    pushElement (6, buf, wPtr, rPtr, isFull);
    popElement (buf, wPtr, rPtr, isFull);
    popElement (buf, wPtr, rPtr, isFull);
}

void pushElement(int val, int (& buf)[numElements], int& wPtr, int& rPtr, bool& isFull) {
    // make sure buffer isn't full
    // put element at write pointer
    // increment write pointer by 1
    // if write pointer == read pointer, then isFull = true

    if (!isFull) {
        buf[wPtr] = val;
        wPtr = (wPtr + 1) % numElements;
        if (wPtr == rPtr) {
            isFull = true;
        }
    }
    else {
        std::cout << "Buffer is currently full, please remove a value first before writing." << std::endl;
    }
    std::cout << "Here is the buffer: ";
    for (int i : buf) {
        std::cout << i << "  ";
    }
    std::cout << wPtr << " " << rPtr << std::endl;
}

int popElement(int (& buf)[numElements], int& wPtr, int& rPtr, bool& isFull) {
    // if empty (wptr == rptr and NOT full), return -1
    // otherwise it has an element so we store the thing we want to pop out in an int var and then decr read ptr by 1

    if (!isFull && wPtr == rPtr) {
        std::cout << "The buffer is empty. Please add an element first." << std::endl;
        std::cout << "Here is the buffer: ";
        for (int i : buf) {
            std::cout << i << "  ";
        }
        std::cout << wPtr << " " << rPtr << std::endl;
        return -1;
    } // otherwise, there are elements in the stack
    int valToRet = buf[rPtr];
    rPtr = (rPtr + 1) % numElements;
    isFull = false;
    std::cout << "Here is the buffer: ";
    for (int i : buf) {
        std::cout << i << "  ";
    }
    std::cout << wPtr << " " << rPtr << std::endl;
    return valToRet;
}
