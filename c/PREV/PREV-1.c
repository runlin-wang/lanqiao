#include <stdio.h>

int minPubNum(int a, int b, int c) {
	int i;
	for (i = a; i < 22000; i++) {
		if (i % a == 0 && i % b == 0 && i % c == 0)
			return i;
	}
	return 0;
}

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int r = minPubNum(a, b, c);
	printf("%d", r);
	
	return 0;
}
