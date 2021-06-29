#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 50000

void generateData();

int main(void) {
	static char s[N + 1];          //声明静态数组防止编译器给出警告
	int n;
	int i, j;
	long long totalCount = 0;    //用long long类型防止数据上溢
	long curCount;               //long有可能与int都是4个字节
	int set[97 + 25 + 1] = { 0 };//长度123的数组只使用索引[97,122]的部分,对应['a','z'].用来模拟集合
	long start, end, millSeconds;//CPU计时参数
	generateData();              //根据编译常数N随机生成有N个字母和一个换行符的数据文件
	freopen("data.txt", "r", stdin); //将键盘输入重定向到数据文件
	scanf("%s", s);
	start = clock();             //开始计时
	n = strlen(s);
	for (i = 0; i < n; i++) {
		for (j = 97; j <= 97 + 25; j++) {  //对以s[i]开头的一组子串计算分值前,将集合的有效元素清零
			set[j] = 0;
		}
		curCount = 0;            //存储分值的计数器清零
		for (j = i; j < n; j++) {
			if (set[s[j]] == 0) {   //以s[i]开头的子串,随着字母个数的增加,其分值单调不减
				set[s[j]] = 1;      //把以s[i]开头的子串中的不同字母放入集合,集合元素是唯一的
				curCount += 1;      //集合中增加一个元素,子串的分值就增加1
			}
			totalCount += curCount; //计算总分值
		}
	}
	end = clock();                //计时结束
	millSeconds = (end - start);  //计算程序运行时间 
	printf("totlaCount=%lld, millSeconds=%d\n", totalCount, millSeconds);
	return 0;
}


void generateData() {
	int i;
	int c;
	FILE * out = fopen("data.txt", "w");
	srand((unsigned int)time(NULL));
	for (i = 0; i < N; i++) {
		c = 97 + (int)(rand() / 32767.0 * 26);
		fprintf(out, "%c", c);
	}
	fprintf(out, "%c", '\n');
	fclose(out);
}
