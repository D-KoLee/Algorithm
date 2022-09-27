#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int arr[201][201] = {0, };
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            for (int k = j + 1; k <= N; k++) {
                if (arr[i][j] == 0 && arr[j][k] == 0 && arr[i][k] == 0) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}