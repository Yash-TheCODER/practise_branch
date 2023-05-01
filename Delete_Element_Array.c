#include <stdio.h>
int main()
{
    int n, arr[100], position, i;
    printf("enter how many elements in the array:\n");
    scanf("%d", &n);
    printf("enter element in the array one by one:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter at which position you want to delete elements:\n");
    scanf("%d", &position);
    for (i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i+1];
    }
    printf("new array is :\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}