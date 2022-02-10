#include <iostream>

using namespace std;

int main()
{
    int num[15];
    int rem[45] = { };
    int count = 0;

    for(int i = 0; i < 10; i++) cin >> num[i];
    for(int i = 0; i < 10; i++) num[i] = num[i] % 42;

    for(int i = 0; i < 10; i++) rem[num[i]]++;

    for(int i = 0; i < 43; i++) if(rem[i] != 0) count++;

    cout << count;
}