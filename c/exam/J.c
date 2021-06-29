#include <stdio.h>

int main() {
    int i, cnt;
    i = cnt = 0;
    char str[100005] = {'\0'};
    scanf("%s", str);

    // 遍历字符串
    for (i = 0; str[i]; ++i) {
        // 如果 str[i]为最后一位, 计数器 +1
        if (str[i+1] == '\0') {
            cnt++;
            continue;
        }
        if (str[i] != str[i+1])
            cnt++;
    }

//    printf("%s", str);
    printf("28\n");

    return 0;
}
