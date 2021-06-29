#pragma warning(disable:4996)

#include <stdio.h>

#define N_MAX 2000
#define M_MAX N_MAX
#define K_MAX 100000

int main() {
	int N, M, K, T;								  //按题中符号定义变量
	int period[N_MAX] = { 0 };                    //生长周期数组
	int seed[M_MAX] = { 0 };					  //种子数组
	static int scheme[K_MAX][3] = { 0 };		  //杂交方案数组(声明为静态以防止编译器警告)
	int k, lastK, lastSeed;
	FILE *in;
	
	in= freopen("data.txt", "r", stdin);          //将键盘输入重定向到文件方便测试
	scanf("%d%d%d%d", &N, &M, &K, &T);
	lastSeed = M;								 //初始化已有的最大种子编号
	for (k = 0; k < N; k++)						 //初始化生长周期数组
		scanf("%d", &period[k]);
	for (k = 0; k < M; k++)						 //初始化种子数组
		scanf("%d", &seed[k]);
	for (k = 0; k < K; k++)						 //初始化杂交方案数组
		scanf("%d%d%d", &scheme[k][0], &scheme[k][1], &scheme[k][2]);

	for (k = 0; k < K; k = lastK) {
		lastK = k;
		while (scheme[lastK][1] <= lastSeed)     //根据已有的种子,确定哪些杂交方案可以进行
			lastK++;							 //循环结束后,scheme数组中行号[k,lastK)之间的杂交方案可以进行
		/*

		 此处自己完成

		*/
	}

	fclose(in);
	return 0;
}