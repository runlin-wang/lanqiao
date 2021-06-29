#include <stdio.h>

int main() {
    int n, i, j, result, max, tmp;
    n = i = j = result = max = tmp = 0;
    int arr[102][102] = {0};    // 初始化数组
    scanf("%d", &n);

    // 按要求输入
    for (i = 0; i < n; ++i) {
        for (j = 0; j <= i; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }

    // 找出最大的和 （result）
    for (i = 0; i < n; ++i) {
        // 找出一行中最大的数
        for (j = 0; j <= i; ++j) {
            if (arr[i][j] > max)
                max = arr[i][j];
        }

        for (j = 0; j <= i; ++j) {
            if (arr[i][j] == max) {
                // 判断数组越界
                if (j == 0) {
                    tmp == arr[i][j+1];
                }
                tmp = arr[i][j - 1] > arr[i][j + 1];
            }
        }
        // 加上最大数和最大数旁边的最大数
        result += max + tmp;
    }

    printf("%d\n", result);

    return 0;
}
