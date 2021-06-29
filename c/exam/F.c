#include <stdio.h>

int main() {
    int n, i, ok, nice;
    n = i = ok = nice = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        if (arr[i] > 60) {
            if (arr[i] > 85)
                nice++;
            ok++;
        }
    }

    printf("%.0f%%\n", 100.0 * ok / n);
    printf("%.0f%%\n", 100.0 * nice / n);

    return 0;
}
