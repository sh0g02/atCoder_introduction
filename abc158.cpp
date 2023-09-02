#include <iostream>
using namespace std;

int main() {
    int a, b, ans;
    cin >> a >> b;
    ans = -1;

    for (int i = 1; i <= 1000; ++i) {
        if (floor(i * 0.08) == a && floor(i * 0.1) == b) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
