#include <iostream>

using namespace std;

int main() {
    int num, hee;
    hee = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        hee += i;
    }
    cout << "Sum = " << hee << endl;
    return 0;
}
