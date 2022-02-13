#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N = 0; // 입력 갯수
    cin >> N;
    float sum = 0; //평균값을 구할 변수

    for(int i = 0; i < N; i++) //N번만큼 실행
    {
        int num = 0; //학생 수
        cin >> num;

        int count = 0; //나중에 평균값이 넘는 학생을 세는 변수

        int arr[num];

        for(int j = 0; j < num; j++) cin >> arr[j];
        for(int j = 0; j < num; j++) sum += arr[j]; //일단 모든 점수를 더한다

        sum /= num; //그리고 나눈다

        for(int j = 0; j < num; j++) if(sum < arr[j]) count++; //평균보다 높은 애들이 있으면 count를 증가한다.

        count = round(count / num * 100) / 100;

        cout << count << "%" << endl;
    }
    cout << "s" << endl;
}