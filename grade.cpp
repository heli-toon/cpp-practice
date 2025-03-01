#include <iostream>
#include <string>
using namespace std;

// Grade System using Switch Case
// We are dividing the score by 5 to compress the range of scores into smaller segments.
// We can now grading ranges using fewer case statements.

int main() {
    string name;
    int score;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter the student's score (0 - 100): ";
    cin >> score;

    int range = score / 5; // Reduce range of cases

    string grade, remarks;
    float gradePoint;

    switch (range) {
        case 20: case 19: case 18: case 17: // 80 - 100
            grade = "A";
            remarks = "Outstanding";
            gradePoint = 4.00;
            break;
        case 16: // 75 - 79
            if (score >= 75 && score <= 79) {
                grade = "A-";
                remarks = "Excellent";
                gradePoint = 3.75;
            } else {
                grade = "A";  // Handling 80 - 84
                remarks = "Outstanding";
                gradePoint = 4.00;
            }
            break;
        case 15: // 70 - 74
            grade = "B+";
            remarks = "Very Good";
            gradePoint = 3.50;
            break;
        case 14: // 65 - 69
            grade = "B";
            remarks = "Good";
            gradePoint = 3.25;
            break;
        case 13: // 60 - 64
            grade = "B-";
            remarks = "Fairly Good";
            gradePoint = 3.00;
            break;
        case 12: // 55 - 59
            grade = "C+";
            remarks = "Above Average";
            gradePoint = 2.75;
            break;
        case 11: // 50 - 54
            grade = "C";
            remarks = "Average";
            gradePoint = 2.50;
            break;
        case 10: // 45 - 49
            grade = "C-";
            remarks = "Below Average";
            gradePoint = 2.00;
            break;
        case 9: // 40 - 44
            grade = "D";
            remarks = "Pass";
            gradePoint = 1.50;
            break;
        default: // 0 - 39
            grade = "F";
            remarks = "Fail";
            gradePoint = 0.00;
            break;
    }

    if (score >= 0 && score <= 100) {
        cout << "\nHello " << name << ", your grade is " << grade
             << " and your grade point is: " << gradePoint
             << ". Your remarks are: " << remarks << endl;
    } else {
        cout << "Invalid score! Please enter a score between 0 and 100.";
    }
    return 0;
}
