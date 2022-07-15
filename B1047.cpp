#include<iostream>
using namespace std;
struct participator {
    int team;
    int number;
    int score;
}a[10005];
int total_score[1005];
int main() {
    int N;
    scanf("%d", &N);
    int max_score = 0, max_team = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d-%d %d", &a[i].team, &a[i].number, &a[i].score);
        total_score[a[i].team] += a[i].score;
        if (total_score[a[i].team] > max_score) {
            max_score = total_score[a[i].team];
            max_team = a[i].team;
        }
    }
    printf("%d %d\n", max_team, max_score);
    return 0;
}