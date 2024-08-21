#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cout << "Enter number to round off: ";
    cin >> num;

    int k;
    cout << "Enter the place to round it off to: ";
    cin >> k;

    double factor = 1.0 / k;
    double roundedNum = floor(num * factor + 0.5) / factor;

    cout << "Result: " << roundedNum << endl;
    return 0;
}
