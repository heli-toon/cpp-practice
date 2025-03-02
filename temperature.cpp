#include <iostream>
using namespace std;

int main() {
    float temperature;
    cout << "Enter temperature: ";
    cin >> temperature;

    if (temperature >= 35){
        cout << "Hot Day";
    } else if (temperature <= 10) {
        cout << "Cold Day";
    } else {
        cout << "Normal Day";
    }
    return 0;
}