#include<iostream>
using namespace std;
int main() {
    int n;
    double temp;
    long long int sum;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> temp;
        sum += (long long)(temp * 1000) * (n - i + 1) * i;;
    }
    printf("%.2f", sum / 1000.0);
    return 0;
}