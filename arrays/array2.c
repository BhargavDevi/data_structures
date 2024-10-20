// finding the second largest element of the array
#include <stdio.h>
int seclarg(int arr[], int size)
{
    int large = arr[0];
    int small = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    for (int j = 0; j < size; j++)
    {
        if (arr[j] < large && arr[j] >= small)
        {
            small = arr[j];
        }
    }
    return small;
}
int main()
{
    int arr[] = {10, 2, 13, 11, 15};

    int size = sizeof(arr) / sizeof(arr[0]);
    int sec = seclarg(arr, size);
    printf("second largest is :%d",sec);

}