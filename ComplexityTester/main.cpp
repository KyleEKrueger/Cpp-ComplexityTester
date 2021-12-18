#include <iostream>

const int TEST_SIZE = 1;
const int NUM_TESTS = 8;
void demoLogGrowth(int n){
    for (int testNum = 1; testNum < NUM_TESTS; testNum++){
        int acc = 0;
        int curSize = n << testNum;
        for (int i = 1; i <= curSize; i*=2){
            acc++;
        }
        std::cout << "Log Test: " << testNum <<" (size: " <<curSize << ") = " << acc << std::endl;
    }
}

void demoLinearGrowth(int n) {
    for (int testNum = 1; testNum < NUM_TESTS; testNum++) {
        int acc = 0;
        int curSize = n << testNum;
        for (int i = 0; i < curSize; i++) {
            acc++;
        }
        std::cout << "Linear Test: " << testNum<<" (size: " <<curSize << ") = " << acc << std::endl;
    }
}

void demoQuadraticGrowth(int n) {
    for (int testNum = 1; testNum < NUM_TESTS; testNum++) {
        int acc = 0;
        int curSize = n << testNum;
        for (int i = 0; i < curSize; i++) {
            for (int j = 0; j < curSize; j++) {
                acc++;
            }
        }
        std::cout << "Quadratic Test: " << testNum <<" (size: " <<curSize << ") = " << acc << std::endl;
    }
}

void demoCubicGrowth(int n) {
    for (int testNum = 1; testNum < NUM_TESTS; testNum++) {
        int acc = 0;
        int curSize = n << testNum;
        for (int i = 0; i < curSize; i++) {
            for (int j = 0; j < curSize; j++) {
                for (int k = 0; k < curSize; k++) {
                    acc++;
                }
            }
        }
        std::cout << "Cubic Test: " << testNum <<" (size: " <<curSize << ") = " << acc << std::endl;
    }
}

/*void demoLinearGrowth(int n){
    for (int testNum = 1; testNum < NUM_TESTS; testNum++){
        int acc = 0;
        int curSize = n << testNum;

    }
}*/
int main() {
    demoLogGrowth(TEST_SIZE);
    demoLinearGrowth(TEST_SIZE);
    demoQuadraticGrowth(TEST_SIZE);
    demoCubicGrowth(TEST_SIZE);
    std::cout << "Tests Complete. Totally Radical my dude." << std::endl;
    return 0;
}
