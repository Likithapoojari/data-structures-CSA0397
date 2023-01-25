#include <stdio.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
int findMinimumMaximum(int arr[], int N)
{
    int i;
    int min = arr[0], max = arr[0];
    for (i = 0; i < N; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // Print the minimum and maximum element
    printf("minimum element is %d", min);
    printf("\n");
    printf("maximum element is %d", max);
}
int main()
{
    int arr[] = {5, 8, 4, -1 };
    int N = ARRAY_SIZE(arr);
    findMinimumMaximum(arr, N);
    return 0;
}
