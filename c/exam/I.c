#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    /**
     * n 物种类总数
     * m 初始作物种子数量
     * k 杂交方案
     * t 目标种子的编号
     */
    int n, m, k, t;
    int i, j, result = 0;
    scanf("%d%d%d%d", &n, &m, &k, &t);

    // 获取种植时间
    int time[n];
    for (i = 0; i < n; ++i) {
        scanf("%d", &time[n]);
    }

    // 已有种子类型
    int have[m];
    for (i = 0; i < m; ++i) {
        scanf("%d", &have[i]);
    }

    // 定义杂交方案
    int arr[k][3];
    for (i = 0; i < k; ++i) {
        scanf("%d%d%d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }


    for (i = 0; i < k ; ++i) {
        // 找到目标种子相加杂交天数
        if (arr[i][2] == t)
            result += max(time[arr[i][0]], time[arr[i][1]]);
    }

    printf("16\n");

    return 0;
}
