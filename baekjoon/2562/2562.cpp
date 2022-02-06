#include <iostream>

using namespace std;

int main()
{
    int a[10] = {0, };
    int num = 0;

    for(int i = 0; i < 9; i++)
    {
        cin >> a[i];
    }

    int max = 0;

    for(int i = 0; i < 9; i++)
    {
        if(max < a[i])
        {
            max = a[i];
            num = i+1;
        }
    }

    cout << max << "\n" << num;
}