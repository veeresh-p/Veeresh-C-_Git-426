#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 0;

    if (b == 0) {
        cout << "Error: Division by zero is not allowed!" << endl;
    } else {
        cout << "Result = " << a / b << endl;
    }

    return 0;
}
