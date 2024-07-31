#include <iostream>
using namespace std;

int main() {
    int row, col;
    for (int row = 1; row <= 8; row++) {
        for ( col = 1; col <= 8 - row; col++) {
            cout << " ";
        }
        for ( col = 1; col <= row; col++) {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}