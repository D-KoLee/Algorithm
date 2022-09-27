#include <iostream>

using namespace std;

int main() {
    int n, m;
    int arr[101] = {0, };
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum <= m && sum > max) {
                    max = sum;
                }
            }
        }
    }
    cout << max << endl;
    return 0;
}