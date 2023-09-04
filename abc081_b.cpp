#include <iostream>
#include <vector>
using namespace std;

int how_many_times(int num) {
    int counter = 0;

    while (num % 2 == 0) {
        num /= 2;
        ++counter;
    }

    return counter;
}

// 十分大きい値
constexpr int INF = 1 << 30;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    // &アンパサンドをつけて、参照変数にする
    for (auto& _a : a) {
        cin >> _a;
    }

    // 答え用の変数は十分大きい値に初期化しておく
    int result = INF;

    for (auto _a : a) {
        int counter = how_many_times(_a);
        // resultとcounter比較
        result = min(counter, result);
    }

    cout << result << endl;
    return 0;
}
