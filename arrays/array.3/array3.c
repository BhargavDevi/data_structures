// Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

#include <stdio.h>
// #include<stdbool. h>
int arra(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[i])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int arr[] = {3, 4, 6, 7,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int c = arra(arr, n);
    if (c == 0)
    {
        printf("FALSE");
    }
    else
    {
        printf("TRUE");
    }
}