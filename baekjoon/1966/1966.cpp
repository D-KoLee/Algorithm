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
        queue<pair<int, int >> q; //무튼 이렇게 페어로 생성
        int cnt = 0;
        cin >> Size >> index_N;
        for (int i = 0; i < Size; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (i == index_N) //나는 그 뭐냐 여기서 우선순위만 받고, 안의 값은 신경 안썼음. 걍 쭉 하다가
            {
                q.push({x, 1}); //내가 원하는 인덱스 번호면 1로 하고
            }
            else
                q.push({x, 0}); //아니면 0으로 함.
        }
        sort(v.begin(), v.end()); //우선순위 따라 정렬하는거
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
            } //여긴 그냥 하는거임. 찾았으면 멈추고(break) 아니면 계속 쭉쭉 하면서 cnt 증가
            else
            {
                q.push({q.front().first, q.front().second});
                q.pop();
            }
        }
        cout << cnt << "\n"; //그렇게 해서 해드렸읍니다. \n 쓴거는 endl은 자바만큼 느려서 시간초과 뜨기 쉽기 때문에 썼음
    }
} //끝. 질문? 자바칩 푸라푸치노 벤티사이즈에 후