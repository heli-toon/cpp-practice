#include <iostream>
using namespace std;

int main(){
    cout << "Enter Fahrenheit temperature: ";

    int fahrenheit;
    cin >> fahrenheit;

    int celsius = (fahrenheit - 32) * 5/9;
    
    cout << "Celsuis: ";
    cout << celsius;

    return 0;
}