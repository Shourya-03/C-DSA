#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;
    cin >> principal >> rate >> time;
    cout << "Simple Interest: " << (principal * rate * time) / 100;
    return 0;
}
