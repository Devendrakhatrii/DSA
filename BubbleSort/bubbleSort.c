#include <stdio.h>

void bubbleSort(int *arr, int n)//using pointer to pass the array so that it is sorted in the memory and not in the local scope
{
    int temp;//temp variable to swap
    for (int i = 0; i < n - 1; i++)//this will run bubble sort n-1 times
    //time complexity of this loop is n
    {
        for (int j = 0; j < n - i - 1; j++)//this should run n-i-1 times so that the largest element is placed at the end
        //time complexity of this loop is n*n
        // so the total time complexity is n*n
        {
            if (arr[j] > arr[j + 1])//if the current element is greater than the next element then swap
            {
                temp = arr[j];//swap j and j+1 by using temp
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = { 5, 3, 8, 4, 2, 1, 9, 7, 11, 7 };//array to be sorted
    int n = 10;
    printf("Before sorting\n");//print the array before sorting
    for (int i = 0; i < n; i++)//loop through all the element in the array
    {
        printf("%d ", arr[i]);
    }
    bubbleSort(arr, n);//calling the sorting function and passing the array and the size of the array
    printf("After sorting\n");//print the array after sorting

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}