#include <iostream>
using namespace std;

int main() {
    int price;
    cout << "Enter the price of one printer: ";
    cin >> price;

    int budget = 1000;
    int remainder = budget % price;

    cout << "Money left over: $" << remainder << endl;

    return 0;
}
