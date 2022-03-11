#include <iostream>

using namespace std;

int main()
{
    int big, small, weight;

    cin >> weight;

    big = weight / 5;

    while(true)
    {
        if(big < 0) {
            cout << "-1";
            return 0;
        }
        else if((weight -(big * 5)) % 3 == 0) {
            small = (weight - (big * 5)) / 3;
            break;
        }
        --big;
    }
    cout << big+small;
    return 0;
}