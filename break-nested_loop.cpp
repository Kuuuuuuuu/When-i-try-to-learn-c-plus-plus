#include <iostream>
using namespace std;

int main() {

    for (int a = 1; a <= 3; a++) {
        for (int n = 1; n <= 3; n++) {
            if (a == 2) {
                break;
            }
            cout << "a = " << a << ", n = " << n << endl;
        }
    }
    return 0;
}
