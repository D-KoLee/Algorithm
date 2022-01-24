#include <iostream>

using namespace std;

int main()
{
    int T = 0;

    cin>>T;

    for(int i = 0; i < T; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}