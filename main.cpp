#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }

    // &アンパサンドをつけて、参照変数にする
    for (auto& _a : a) {
        cin >> _a;
    }

    int count = 0;

    while (true) {
        bool can_do = true;

        // 範囲forを使ってこう書ける
        for (auto _a : a) {
            if (_a % 2 == 1) {
                can_do = false;
            }
        }

//        for (int i = 0; i < n; ++i) {
//            if (a[i] % 2 == 1) {
//                can_do = false;
//            }
//        }

        if (!can_do) {
            break;
        }

        for (int i = 0; i < n; ++i) {
            a[i] /= 2;
        }

        ++count;
    }

    cout << count << endl;
    return 0;
}
