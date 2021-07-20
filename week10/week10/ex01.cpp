#include <stdio.h>

int str_len(const char* ptr);

int main()
{
	const char a[] = "123456789";
	const char* ptr = a;
	printf("The length of the string : %d", str_len(ptr));
}

int str_len(const char* ptr)
{
	int length = 0;
	for (int i=0; *(ptr+i)!='\0'; i++)
	{
		length++;
	}
	return length;
}