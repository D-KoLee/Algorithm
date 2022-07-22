#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int times, Size, index_N; // times: 시간, Size: 배열의 크기, index_N: 내가 원하는 인덱스 번호

int main()
{
    cin >> times;   //몇번이냐
    while (times--) //횟수 다할때까지
    {
        vector<int> v;
        queue<pair<int, int >> q; 
        int cnt = 0;

        cin >> Size >> index_N;

        for (int i = 0; i < Size; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (i == index_N)
            {
                q.push({x, 1});
            }
            else
                q.push({x, 0});
        }
        sort(v.begin(), v.end());
        for (;;)
        {
            if (v.back() == q.front().first)
            {
                if (q.front().second == 1)
                {
                    cnt++;
                    break;
                }
                else
                {
                    v.pop_back();
                    q.pop();
                    cnt++;
                }
            }
            else
            {
                q.push({q.front().first, q.front().second});
                q.pop();
            }
        }
        cout << cnt << "\n";
    }
}