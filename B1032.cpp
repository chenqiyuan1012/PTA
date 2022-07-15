#include<iostream>
using namespace std;
const int MAX = 1e5 + 5;
long school[MAX];
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int s, t;
        scanf("%d %d", &s, &t);
        school[s] += t;
    }
    int max_school = 1;
    long max_score = 0;
    for (int i = 0; i < N; i++) {
        if (school[i] > max_score) {
            max_score = school[i];
            max_school = i;
        }
    }
    printf("%d %d\n", max_school, max_score);
    return 0;
}