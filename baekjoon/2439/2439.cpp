#include <iostream>

using namespace std;

int main()
{
    int T = 0;

    cin>>T;

    for(int i = 1; i <= T; i++)
    {
        for (int j = (T-i); j >= 1; j--)
        {
            cout<<" ";
        }
        for (int k = 0; k < i; k++)
        {
            cout<<"*";
        }
        if( i != T) cout<<"\n";
    }
}