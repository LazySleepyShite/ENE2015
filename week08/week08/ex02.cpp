#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void read_array(int num[]);
int winner(int cond[]);
#define NUM 6

int main()
{
	srand(time(0));
	int num_in[NUM];
	int err = 0;

	read_array(num_in);

	for (int i = 0; i < NUM; i++)
	{
		if (num_in[i] > 4 || num_in[i] < 1)
		{
			printf("%d번째 숫자 입력 오류!!\n", i);
			err++;
		}
	}

	if (err==0) printf("축하합니다! %d등에 당첨되셨습니다!\n", winner(num_in));

	return 0;
}

void read_array(int num[])
{
	printf("1~4까지의 수 중 6개 입력\n");
	for (int i = 0; i < NUM; i++) {
		scanf_s(" %d", &num[i]);
	}
}

int winner(int cond[])
{
	int ref[NUM];
	int score = 7;
	for (int i=0; i<NUM; i++)
	{
		ref[i] = (rand() % 4 + 1);
		if (ref[i] == cond[i]) score--;
	}
	printf("당첨번호는 %d %d %d %d %d %d 입니다\n", ref[0], ref[1], ref[2], ref[3], ref[4], ref[5]);
	return score;
}