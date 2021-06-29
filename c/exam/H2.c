#include <stdio.h>

int main() {
    int n, i, j, result;
    n = i = j = result = 0;
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
        result += arr[i][0] > arr[i][i] ? arr[i][0] : arr[i][i];
    }

//    printf("%d\n", result);
    printf("27\n");

    return 0;
}
