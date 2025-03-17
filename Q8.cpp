#include <iostream>
using namespace std;

int main() {
    int a = 4, b = 5;
    a += b--;
    cout << a << " " << b;
}
