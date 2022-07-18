#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int arr[100000] = {};

int main()
{
    stack<int> arr;
    vector<char> pushpop;
    int cnt = 1;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        for (cnt; cnt <= num; cnt++)
        {
            arr.push(cnt);
            pushpop.push_back('+');
        }

        if (arr.top() == num)
        {
            arr.pop();
            pushpop.push_back('-');
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    for(int i = 0; i < pushpop.size(); i++)
    {
        cout << pushpop[i]<<endl;
    }

    return 0;
}