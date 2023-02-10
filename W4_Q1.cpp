#include <iostream>

using namespace std;

string calcGrade(int grade);
// This initializes a function with an integer parameter.
// Allows us to put the code for the function below the main function
// Source:: https://www.w3schools.com/cpp/cpp_functions.asp
int main() {
    int grade = 0;
    cout << "Enter a percentage score 1-100 from a recent assignment" << endl;
    cin >> grade;
    string calculatedGrade = calcGrade(grade);
    cout << "Your grade is a " << calculatedGrade << "."<< endl;
    return 0;
}

string calcGrade(int grade) {
    if (grade <= 59.9) {
        return "F";
    } else if (grade >= 60.0 && grade <= 69.9) {
        return "D";
    } else if (grade >= 70.0 && grade <= 79.9) {
        return "C";
    } else if (grade >= 80.0 && grade <= 89.9) {
        return "B";
    } else if (grade >= 90.0 && grade <= 100.0) {
        return "A";
    } else {
        return "Not a valid score";
    }
}
