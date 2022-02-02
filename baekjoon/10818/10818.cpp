#include <iostream>

using namespace std;

int main()
{
    int N;
    int min, max;
    cin >> N;
    const int Size = N;

    int arr[Size];

    for(int i = 0; i < Size; i++) cin >> arr[i];
    min = max = arr[0];

    for(int i = 0; i < Size; i++) if(min > arr[i]) min = arr[i];
    for(int i = 0; i < Size; i++) if(max < arr[i]) max = arr[i];

    cout << min << " " << max;
}