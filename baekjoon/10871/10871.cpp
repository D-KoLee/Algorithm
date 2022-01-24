#include <iostream>

using namespace std;

int main()
{
    int N, X;
    cin >> N;
    cin >> X;
    const int Size = N;

    char arr[Size];
    cin.getline(arr, Size);

    cout << arr[3];
}