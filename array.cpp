#include <iostream>
using namespace std;

int main() {
    int array[5] = {7, 5, 6, 12, 35};

    for (const int &n : array) {
        cout << n << "  ";
    }

    for (int i = 0; i < 5; ++i) {
        cout << array[i] << "  ";
    }
    return 0;
}
