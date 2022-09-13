#include <iostream>
using namespace std;

int fibo(int n)
{
    if(n > 1) {
        return n * fibo(n - 1);
    }
    else
        return 1;
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
}