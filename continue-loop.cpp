#include <iostream>
using namespace std;

int main() {
    for (int a = 1; a <= 100; a++) {
        if(a == 30) {
           continue;
        }
        cout << a << endl;
    }
    return 0;
}
