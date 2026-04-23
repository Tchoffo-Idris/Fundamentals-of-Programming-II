#include <iostream>
using namespace std;

void drawDiamond(int size) {
    for (int row = 1; row <= size; row++) {
        for (int space = 0; space < size - row; space++) {
            cout << " ";
        }
        for (int star = 0; star < 2 * row - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int row = size - 1; row >= 1; row--) {
        for (int space = 0; space < size - row; space++) {
            cout << " ";
        }
        for (int star = 0; star < 2 * row - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int size;

    cout << "   Diamond Shape Generator   \n";
    cout << "Enter the size (upper-half rows): ";
    cin >> size;

    if (size <= 0) {
        cout << "Error: Size must be a positive integer.\n";
        return 1;
    }

    cout << "\n";
    drawDiamond(size);
    cout << "\n";

    return 0;
}
