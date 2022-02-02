#include <iostream>

using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    const int Size = N;

    char arr[Size];

    for(int i = 0; i <= Size; i++) cin >> arr[i];
    
    for(int i = 0; i <= Size; i++) cout << arr[i] << "\n";

}