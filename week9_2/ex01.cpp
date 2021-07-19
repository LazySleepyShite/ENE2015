#include <stdio.h>

void square(int* p);

int main()
{
	int n;
	int* p;

	p = &n;

	printf("숫자입력: ");
	scanf("%d", p); //포인터 p에 값 입력받기.
	printf("\n숫자 입력 후 n의 값 : %d\n", n);
	printf("숫자 입력 후 포인터 변수 p의 값 : %d\n", *p);

	square(p);//괄호 안에 들어가는 변수는 argument
			// 반드시 포인터 p를 인자로 사용

	printf("square 함수 실행 후 n의 값 : %d\n", n);
	printf("square 함수 실행 후 포인터 변수 p의 값 : %d\n", *p);
}

void square(int *p)
{
	*p = (*p) * (*p);
}