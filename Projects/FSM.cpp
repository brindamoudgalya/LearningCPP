#include <iostream>

int main() {

    enum State {RED, YELLOW, GREEN};

    State currState = RED;
    int numSecs = 0;
    for (int i = 0; i < 100; i++) {
        switch (currState) {
            case (RED):
                numSecs += 1;
                if (numSecs == 20) {
                    numSecs = 0;
                    currState = GREEN;
                }
                break;
            case (YELLOW):
                numSecs += 1;
                if (numSecs == 5) {
                    numSecs = 0;
                    currState = RED;
                }
                break;
            case (GREEN):
                numSecs += 1;
                if (numSecs == 20) {
                    numSecs = 0;
                    currState = YELLOW;
                }
                break;
        }
        std::cout << currState << "   " << numSecs << std::endl;
    }

    return 0;
}