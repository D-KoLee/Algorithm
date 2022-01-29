#include <iostream>

using namespace std;

int main()
{
    int inputN, frtN, bckN, tmp, i = 0;
    cin >> inputN;

    tmp = inputN;

    do
    {
        frtN = inputN / 10;
        bckN = inputN % 10;

        inputN = (frtN + bckN) % 10;

        inputN = 10 * bckN + inputN;
        i++;

    } while (tmp != inputN);
    
    cout << i ;

}