#include <stdio.h>

int main() {
    int n = 78120;
    int i = 0;
    int cnt = 0;
    for (i = 1; i < n; ++i) {
        if (n % i == 0) {
            cnt++;
        }
    }
    printf("%d\n", cnt);

    return 0;
}
