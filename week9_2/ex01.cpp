#include <stdio.h>

void square(int* p);

int main()
{
	int n;
	int* p;

	p = &n;

	printf("�����Է�: ");
	scanf("%d", p); //������ p�� �� �Է¹ޱ�.
	printf("\n���� �Է� �� n�� �� : %d\n", n);
	printf("���� �Է� �� ������ ���� p�� �� : %d\n", *p);

	square(p);//��ȣ �ȿ� ���� ������ argument
			// �ݵ�� ������ p�� ���ڷ� ���

	printf("square �Լ� ���� �� n�� �� : %d\n", n);
	printf("square �Լ� ���� �� ������ ���� p�� �� : %d\n", *p);
}

void square(int *p)
{
	*p = (*p) * (*p);
}