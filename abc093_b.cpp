#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    for (int i = a; i <= min(b, a + k - 1); ++i) {
        // 0からのループではなく、始点をaにする
        // bと、kの和がどちらか近い方までループ
        std::cout << i << std::endl;
    }
    for (int i = max(b - k + 1, a + k); i <= b; ++i) {
        std::cout << i << std::endl;
    }
    return 0;
}
