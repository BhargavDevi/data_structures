// this is to print the largest element of an array
#include <stdio.h>
int array(int arr[], int size)
{
    int large = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    return large;
}
int main()
{
    int arr[] = {2, 5, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int a = array(arr, size);
    printf("Largest number is: %d\n", a);
}