#include <iostream>
using namespace std;

int main() {
    long long X;
    cin >> X;

    long long result = 100;
    int year = 0;

    while (result < X) {
        result += result / 100;
        ++year;
    }

    std::cout << year << std::endl;
}
