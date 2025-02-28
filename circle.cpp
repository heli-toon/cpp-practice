#include <iostream>
using namespace std;

int main() {
    float PI = 3.142;
    int raduis;

    cout << "Enter the raduis: ";
    cin >> raduis;

    float area =  PI * raduis * raduis;
    float circumference = 2 * PI * raduis;
    
    cout << "The Area of the circle is: ";
    cout << area << "\n";
    cout << "The Circumference of the circle is: ";
    cout << circumference;
    return 0;
}