#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++) {
        int num = i;
        int tmp = i;
        while (tmp > 0) {
            num += tmp % 10;
            tmp /= 10;
        }
        if (num == n) {
            sum = i;
            break;
        }
    }
    cout << sum << endl;
    return 0;
}