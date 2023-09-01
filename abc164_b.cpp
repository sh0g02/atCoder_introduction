#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    string result;

    while (true) {
        C -= B;
        if (C <= 0) {
            result = "Yes";
            break;
        }
        A -= D;
        if (A <= 0) {
            result = "No";
            break;
        }
    }
    std::cout << result << std::endl;
}
