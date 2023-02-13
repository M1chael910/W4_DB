/*
 Michael Murphy
 W1 Q3
 2/12/23
 CSC 121
 */


#include <iostream>

using namespace std;


string calcGrade(int grade);

int promptAndValidateGrade();

int main() {
    int score1, score2, score3;
    score1 = promptAndValidateGrade();
    string Grade1 = calcGrade(score1);
    cout << "You got a " << Grade1 << "." << endl;
    score2 = promptAndValidateGrade();
    string Grade2 = calcGrade(score2);
    cout << "You got a " << Grade2 << "." << endl;
    score3 = promptAndValidateGrade();
    string Grade3 = calcGrade(score3);
    cout << "You got a " << Grade3 << "." << endl;
    double averageScore = (score1 + score2 + score3) / 3;
    string averageGrade = calcGrade(averageScore);
    cout << "Your average score is a " << averageGrade << "." << endl;
    return 0;
}

int promptAndValidateGrade() {
    int score = 0;
    label:
    cout << "Enter a score 1-100." << endl;
    cin >> score;
    if (score > 100 || score < 0) {
        goto label;
    } else {
        return score;
    }
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