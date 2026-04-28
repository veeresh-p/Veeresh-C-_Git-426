#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int roll, age;
    string name;
    float m1, m2, m3, avg;

    try {
        cout << "Enter Roll Number: ";
        cin >> roll;

        if (roll <= 0) {
            throw invalid_argument("Invalid roll number!");
        }

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        if (age <= 0 || age > 100) {
            throw invalid_argument("Invalid age!");
        }

        cout << "Enter 3 Subject Marks: ";
        cin >> m1 >> m2 >> m3;

        // Validate marks
        if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100) {
            throw invalid_argument("Marks must be between 0 and 100!");
        }

        avg = (m1 + m2 + m3) / 3;

        cout << "\n--- Student Details ---" << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Average Marks: " << avg << endl;
    }
    catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
