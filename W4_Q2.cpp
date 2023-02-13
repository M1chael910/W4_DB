/*
 Michael Murphy
 W1 Q2
 2/12/23
 CSC 121
 */



#include <iostream>

using namespace std;


string calcGrade(int grade);


int main() {
    int score1, score2, score3;
    cout << "Enter a score 1-100." << endl;
    cin >> score1;
    string Grade1 = calcGrade(score1);
    cout << Grade1 << endl;
    cout << "Enter a score 1-100." << endl;
    cin >> score2;
    string Grade2 = calcGrade(score2);
    cout << Grade2 << endl;
    cout << "Enter a score 1-100." << endl;
    cin >> score3;
    string Grade3 = calcGrade(score3);
    cout << Grade3 << endl;
    double average = (score1 + score2 + score3) / 3;
    cout << "Your average score is a " << calcGrade(average) << "." << endl;
    return 0;
}

string calcGrade(int grade) {
    int simplifiedGrade = grade / 10; // Allows us to deal with fewer cases in the switch statement
    switch (simplifiedGrade) {
        case 6:
            return "D";
        case 7:
            return "C";
        case 8:
            return "B";
        case 9:
            return "A";
        default:
            return "F";
    }
}

