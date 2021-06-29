#include <stdio.h>

int main() {
    int arr[26] = {0};          // 定义存放单个字母的计数器
    int max = 0, i = 0;         // 定义单个字母出现最大次数，定义游标（loop）
    char str[1024];             // 定义存放单词的字符数组
    scanf("%s", str);

    for (i = 0; str[i]; ++i) {
        arr[str[i] - 'a']++;    // 对相应的字母计数器 +1
    }

    // 找到出现次数最多的次数 max
    for (i = 0; i < 26; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // 按格式输出
    for (i = 0; i < 26; ++i) {
        if (arr[i] == max) {
            printf("%c\n", 'a' + i);
            printf("%d\n", max);
            break;
        }
    }

    return 0;
}
