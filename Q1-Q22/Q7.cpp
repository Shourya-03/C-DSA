#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num >= 65 && num <= 90)
        cout << "Character: " << char(num);
    else
        cout << "Invalid Input!";
    return 0;
}
