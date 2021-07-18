#include <stdio.h>

int main()
{
    int arr1[10];
    for (int i = 0; i < 10; i += 1)
    {
        arr1[i] = (2 * i);
        printf("arr1[%d]=%d\n", arr1[i], arr1[i]);
    }
    return 0;
}