/*
 * Algorithm: Bubble Sort
 * Description: Bubble Sort compares each pair of adjacent elements, and swaps them if they are in wrong order
 * Time Complexity: O(n^2) in the worst case
 * Space Complexity: O(1)
 */


#include <stdio.h>
#define MAX 500
void bubbleSort(int arr[] , int size)
{
    // Outer loop for each pass through the array
    // We need (size - 1) passes in total

    for (int i = 0; i < size - 1; i++)      
    {
        // Inner loop to compare and swap adjacent elements
        // After each pass, the largest unsorted element bubbles up to its correct position

        for (int j = 0; j < size - i -1; j++)  
        {
            if(arr[j] > arr[j+1])
            {
                // Swapping elements to move the larger one to the right
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[MAX];
    int size;

    printf("Enter the size of array :");
    scanf("%d" ,&size);                 //Input size of the array

    if(size > MAX)                  //size shouldn't exceed MAX
    {
        printf("\nSize cannot exceed %d\n", MAX);
        return 1;
    }

    for (int i = 0; i < size; i++)          
    {
        printf("Enter Element [%d] :",i + 1);
        scanf("%d" ,&arr[i]);               //Input Array elements
    }

    printf("\nGiven Array :");              //Print the elements in un-sorted order
    for (int i = 0; i < size; i++)
    {
        printf("[%d] " ,arr[i]);
    }

    bubbleSort(arr, size);              //calling bubbleSort() function

    printf("\nSorted Array :");         //Print the elements in sorted order
    for (int i = 0; i < size; i++)
    {
        printf("[%d] " ,arr[i]);
    }
    return 0;
}