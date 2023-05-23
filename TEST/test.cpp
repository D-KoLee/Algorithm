//
// Created by SeungJun Ryu on 2023/04/21.
//
#include "iostream"

using namespace std;

enum Enum {
    ONE = 1,
    TWO = 2,
    THREE = 3,
    FOUR = 4
};

int main() {
    cout << (ONE + TWO) << endl;
    cout << (FOUR - THREE) << endl;
    cout << (TWO * THREE) << endl;
    cout << (FOUR / TWO) << endl;
    cout << (THREE % TWO) << endl;
    cout << (ONE | TWO) << endl;
    cout << (TWO & THREE) << endl;
    cout << (THREE ^ FOUR) << endl;
    cout << (ONE << 1) << endl;
    cout << (TWO >> 1) << endl;
    return 0;
}