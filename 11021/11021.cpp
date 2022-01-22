#include <iostream>

using namespace std;

int main()
{
    int T, A, B;

    cin >> T;

    if(T <= 1000000)
    {
        for(int i = 0; i < T; ++i)
        {
            cin >> A >> B;
            cout << "Case #"<< i+1 << ": "<< A+B << "\n";
        }
    }
}