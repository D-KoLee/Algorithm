#include <iostream>
#include <algorithm>

using namespace std;

int n; // 인원 수
int ability[20][20]; // 능력치
int team[20]; // 각 인원이 속한 팀 - 0 : start, 1 : link
int minDiff = 2e9; // 차이의 최솟값

// 팀 나누기 - solve
// 스타트 팀, 링크 팀의 능력치 각각 구하기 - calculateTA

void calculateTA() {
    int startTeamAbility = 0; // startTeam 능력치
    int linkTeamAbility = 0; // linkTeam 능력치
    
    // 팀 능력치 구하기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (team[i] == 0 && team[j] == 0) startTeamAbility += ability[i][j];
            else if (team[i] == 1 && team[j] == 1) linkTeamAbility += ability[i][j];
        }
    }
    
    // 팀 능력치 비교하기
    minDiff = min(minDiff, abs(startTeamAbility - linkTeamAbility));
}

void solve(int idx, int startTeamNum) {
    // 모든 인원 다 배정했을 때
    if (idx == n) return;
    
    // 스타트팀원의 수 : 링크팀원의 수 = 1 : 1
    if (startTeamNum == n/2) {
        calculateTA();
        return;
    }
    
    // idx가 startTeam일 때, startTeam 배정하기
    team[idx] = 0;
    solve(idx + 1, startTeamNum + 1);
    
    // idx가 startTeam 아닐 때, startTeam 배정하기
    team[idx] = 1;
    solve(idx + 1, startTeamNum);
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &ability[i][j]);
        }
        team[i] = 1;
    }
    solve(0, 0);
    printf("%d\n", minDiff);
    return 0;
}