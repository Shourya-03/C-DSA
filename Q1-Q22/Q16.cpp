#include <iostream>
using namespace std;

int main() {
    int num1, den1, num2, den2;
    cin >> num1 >> den1 >> num2 >> den2;
    
    int numerator = (num1 * den2) + (num2 * den1);
    int denominator = den1 * den2;

    cout << "Sum: " << numerator << "/" << denominator;
    return 0;
}
