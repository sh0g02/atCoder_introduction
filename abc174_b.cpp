#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    ll n, d, x, y, count = 0;
    cin >> n >> d;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        if (sqrt(x * x + y * y) <= d) count++;
    }
    cout << count << endl;
    return 0;
}
