#include <stdio.h>  
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
void main()
{
    int* ptr;
    int max = 0, i, n, max_counter = 0;
    printf("Input size of massiv, n<30 \n");
    scanf_s("%d", &n);

    if (!(ptr = (int*)malloc(n * sizeof(int))))   //выделение памяти и проверка, 
    {                                            //достаточно ли для нее места
        puts("Not enough memory");
        return;
    }
    for (i = 0; i < n; i++)
    {
        printf("Input element [%d]\n", i + 1);
        scanf_s("%d", ptr + i);
    }
    printf("\nMassiv: \n", i + 1);
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    for (i = 0; i < n; i++)
    {
        if (max < *(ptr + i)) max = *(ptr + i);
    }
    for (i = 0; i < n; i++) {
        if (*(ptr + i) == max) max_counter += 1;
    }
    printf("\n max element:  %d\n", max);
    printf("\n count max:  %d\n", max_counter);
    free(ptr);     //освобождение динамической памяти
    return 0;
}