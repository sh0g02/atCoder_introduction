#include <iostream>
using namespace std;

int main() {
    int p;
    cin >> p;
    int ans = 0;
    int x = 2;
    while (p > 0) {
        ans += p%x;
        p /= x;
        x++;
    }
    std::cout << ans << std::endl;
    return 0;
}
