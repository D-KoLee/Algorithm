#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T, A, B;

    cin >> T;

    if(T <= 1000000)
    {
        for(int i = 0; i < T; ++i)
        {
            cin >> A >> B;
            if(0<= A && A>= 1000 && 0 <= B&&B >= 1000) { cout << A+B << "\n";}
        }
    }
}
