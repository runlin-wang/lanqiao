#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 50000

void generateData();

int main(void) {
	static char s[N + 1];          //������̬�����ֹ��������������
	int n;
	int i, j;
	long long totalCount = 0;    //��long long���ͷ�ֹ��������
	long curCount;               //long�п�����int����4���ֽ�
	int set[97 + 25 + 1] = { 0 };//����123������ֻʹ������[97,122]�Ĳ���,��Ӧ['a','z'].����ģ�⼯��
	long start, end, millSeconds;//CPU��ʱ����
	generateData();              //���ݱ��볣��N���������N����ĸ��һ�����з��������ļ�
	freopen("data.txt", "r", stdin); //�����������ض��������ļ�
	scanf("%s", s);
	start = clock();             //��ʼ��ʱ
	n = strlen(s);
	for (i = 0; i < n; i++) {
		for (j = 97; j <= 97 + 25; j++) {  //����s[i]��ͷ��һ���Ӵ������ֵǰ,�����ϵ���ЧԪ������
			set[j] = 0;
		}
		curCount = 0;            //�洢��ֵ�ļ���������
		for (j = i; j < n; j++) {
			if (set[s[j]] == 0) {   //��s[i]��ͷ���Ӵ�,������ĸ����������,���ֵ��������
				set[s[j]] = 1;      //����s[i]��ͷ���Ӵ��еĲ�ͬ��ĸ���뼯��,����Ԫ����Ψһ��
				curCount += 1;      //����������һ��Ԫ��,�Ӵ��ķ�ֵ������1
			}
			totalCount += curCount; //�����ܷ�ֵ
		}
	}
	end = clock();                //��ʱ����
	millSeconds = (end - start);  //�����������ʱ�� 
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
