#include <iostream>
using namespace std;

int main() {
    int heads, legs;
    cin >> heads >> legs;
    int dogs = (legs - 2 * heads) / 2;
    int chickens = heads - dogs;
    cout << "Dogs: " << dogs << ", Chickens: " << chickens;
    return 0;
}
