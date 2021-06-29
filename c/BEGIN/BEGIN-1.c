#include <stdio.h>

int main(int argc, char **argv) {
    int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int i;
	// a, b, c < 30
//	while (!(a % i) && !(b % i) && !(c % i)) {
	// while (!(i % a) && !(i % b) && !(i % c)) {
	//printf("a=%d, b=%d, c=%d\n", a, b, c);
	//int a = 2 % 3;
	//printf("%d\n", a);
	//printf("20 %d=%d, 20 %d=%d", a, 20%a, b, 20%b);
	
	for (i = a; !(i % a) || !(i % b) || !(i % c) ; i += a) {
		
	}
	
	printf("%d\n", i);
    
    return 0;
}

