#include <iostream>
using namespace std;

void printOddNumbers(){
    cout << "Odd Numbers from 1 to 20: ";
    for (int i = 1; i <= 20; i++){
        if (i % 2 != 0){
            cout << i << " ";
        }
    }
}

int main() {
    string name;
    int age;
    float height;

    cout << "\nEnter your name: ";
    cin >> name;
    cout << "Good day, " << name << endl;

    printOddNumbers();

    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is " << age << endl;

    if (age >= 18){
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a child." << endl;
    }

    cout << "Enter your height: ";
    cin >> height;
    cout << "Your height is " << height << endl;

    // Print Even numbers from 1 to 10
    cout << "\nEven numbers from 1 to 10: ";
    for (int i = 1; i <= 10; i++){
        if (i % 2 == 0){
            cout << i << " ";
        }
    }
    return 0;
}