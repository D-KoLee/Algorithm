#include <iostream>

using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    const int Size = N;

    int arr[Size];

    for(int i = 0; i < Size; i++) cin >> arr[i];
    
    for(int i = 0; i < Size; i++)
    {
        if(arr[i] < X)
            cout << arr[i] << " ";
    }
}