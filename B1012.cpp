#include<iostream>
using namespace std;
const int MAX = 1005;
int main() {
    int a[MAX];
    int i = 0;
    int n = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int a1 = 0, a2 = 0, a3 = 0, a5 = 0;
    int a3_flag = 1;
    int n_a4 = 0;
    int n_a3 = 0;
    float sum_a4 = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 5 == 0 and a[i] % 2 == 0) a1 += a[i];
        if (a[i] % 5 == 2) ++a2;
        if (a[i] % 5 == 3) {
            ++n_a4;
            sum_a4 += a[i];
        }
        if (a[i] % 5 == 4 and a[i] > a5) {
            a5 = a[i];
        }

        if (a[i] % 5 == 1) {
            ++n_a3;
            a3 += a[i] * a3_flag;
            a3_flag = (-1) * a3_flag;
        }
    }
    float a4 = sum_a4 / n_a4;
    //printf("%d %d %d %.1f %d", a1, a3, a2, a4, a5);
    if (a1 == 0) printf("N "); else printf("%d ", a1);
    if (n_a3 == 0) printf("N "); else printf("%d ", a3);
    if (a2 == 0) printf("N "); else printf("%d ", a2);
    if (n_a4 == 0) printf("N "); else printf("%.1f ", a4);
    if (a5 == 0) printf("N"); else printf("%d", a5);
    return 0;
}