#include <stdio.h> 

void print(char ch, int i) {
	for (; i > 0; i--) {
		printf("%c", ch);
	}
}

int main() {
	int n, i;
	scanf("%d", &n);
	n = n * 4 + 5;  //总共的行列数 
	
	for (i = 0; i < n; i++) {
		print('.', 2);
		print('$', n - 4);
		print('.', 2);
		printf("\n");
	}
	
	return 0;
}

