#include <iostream>
#include <vector>
#include <algorithm> // sort関数を利用する
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    // &アンパサンドをつけて、参照変数にする
    for (auto& _a : a) {
        cin >> _a;
    }

    // 大きい順番にソート
    sort(a.begin(), a.end(), greater());

    int result = 0;

    for (int i = 0; i < a.size(); ++i) {
        if (i % 2 == 0) {
            result += a[i];
        } else {
            result -= a[i];
        }
    }

    cout << result << endl;
    return 0;
}
