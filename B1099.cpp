#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

bool isPrime(int x) {
    if (x == 1 or x <= 0) return false;
    //bool flag = True;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    int up = n + 6;
    int down = n - 6;
    if (isPrime(n)) {
        if (isPrime(down))
            printf("Yes\n%d", down);
        else if (isPrime(up))
            printf("Yes\n%d", up);
        else {
            printf("No\n");
            for (int i = n;; i++) {
                if (isPrime(i)) {
                    if (isPrime(i - 6)) {
                        printf("%d", i)
                        break;
                    }
                    else if (isPrime(i + 6)) {
                        printf("%d",i)
                        break;
                    }
                }
            }
        }
    }
    else {
        printf("No\n");
        for (int i = n;; i++) {
            if (isPrime(i)) {
                if (isPrime(i - 6)) {
                    printf("%d", i)
                        break;
                }
                else if (isPrime(i + 6)) {
                    printf("%d", i)
                        break;
                }
            }
        }
    }
    return 0;
}