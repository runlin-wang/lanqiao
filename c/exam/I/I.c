#pragma warning(disable:4996)

#include <stdio.h>

#define N_MAX 2000
#define M_MAX N_MAX
#define K_MAX 100000

int main() {
	int N, M, K, T;								  //�����з��Ŷ������
	int period[N_MAX] = { 0 };                    //������������
	int seed[M_MAX] = { 0 };					  //��������
	static int scheme[K_MAX][3] = { 0 };		  //�ӽ���������(����Ϊ��̬�Է�ֹ����������)
	int k, lastK, lastSeed;
	FILE *in;
	
	in= freopen("data.txt", "r", stdin);          //�����������ض����ļ��������
	scanf("%d%d%d%d", &N, &M, &K, &T);
	lastSeed = M;								 //��ʼ�����е�������ӱ��
	for (k = 0; k < N; k++)						 //��ʼ��������������
		scanf("%d", &period[k]);
	for (k = 0; k < M; k++)						 //��ʼ����������
		scanf("%d", &seed[k]);
	for (k = 0; k < K; k++)						 //��ʼ���ӽ���������
		scanf("%d%d%d", &scheme[k][0], &scheme[k][1], &scheme[k][2]);

	for (k = 0; k < K; k = lastK) {
		lastK = k;
		while (scheme[lastK][1] <= lastSeed)     //�������е�����,ȷ����Щ�ӽ��������Խ���
			lastK++;							 //ѭ��������,scheme�������к�[k,lastK)֮����ӽ��������Խ���
		/*

		 �˴��Լ����

		*/
	}

	fclose(in);
	return 0;
}