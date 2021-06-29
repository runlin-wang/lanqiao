#include <stdio.h>

int main() {
    int n = 2020;
    int i;
    int cnt = 0;

    for (i = 1; i <= n; ++i) {
        int tmp = i;
        while (tmp > 0) {
            if (tmp % 10 == 2)
                cnt++;  // 如果 tmp 中含有 2 计数器 +1
            tmp /= 10;
        }
    }
    printf("%d\n", cnt);

    return 0;
}
