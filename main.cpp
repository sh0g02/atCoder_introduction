#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 1;
    while(ans * 2 <= n)
    {
        ans = ans * 2;
        // ans <<= 1;: ans を2倍にするために、ビットを1つ左にシフトする。これは ans = ans * 2; と同等。
    }
    cout << ans << endl;
    return 0;
}
