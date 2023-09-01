#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long result = 0;
    int i = 1;

    while (true) {
        result += i;

        if (result >= N) {
            break;
        } else {
            ++i;
        }
    }

    std::cout << i << std::endl;
}
