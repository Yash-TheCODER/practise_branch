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
    int sum=0;
    for(i=0;i<n;i++)
    sum+=arr[i];
    printf("sum of all the elements: %d\n",sum);
    return 0;
}