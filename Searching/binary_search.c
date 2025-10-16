/*
 * Algorithm: Binary Search
 * Description: Searches for a given key by partitioning array in half according to the key
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 * Limitation : Array must be sorted
 * Note: Output index is 1-based for user readability.
 */


#include <stdio.h>
#define MAX 500

int binarySearch(int arr[], int size, int key)
{
    int low = 0;     //first index of the array
    int high = size - 1;  //last index of the array

    while(low <= high)
    {
        int mid = low + (high - low) / 2;      //to find the middle index of array
        if (arr[mid] == key)                  //check if key is at the middle index
        {
            return mid;
        }
        else if(arr[mid] < key)               //If key is greater, ignore left half
        {
            low = mid + 1;
        }
        else                                //If key is smaller, ignore right half
        {
            high = mid - 1;
        }
    }
    return -1;                              //return -1 if element not found
}

int main()
{
    int arr[MAX];
    int size, key, index;

    printf("Enter the size of array :");
    scanf("%d" ,&size);                     //Input size of array

    if(size > MAX)                      //size shouldn't exceed MAX 
    {
        printf("\nSize cannot exceed %d\n" ,MAX);
        return 1;
    }

    for(int i = 0; i < size; i++)
    {
        printf("Enter element [%d] :" ,i + 1);
        scanf("%d" ,&arr[i]);                   //Input array
    }

    printf("Enter key to search :");
    scanf("%d" ,&key);                          //Input key element

    index = binarySearch(arr, size, key);       //store index if element found else store -1

    if(index != -1)                 //check if element found
    {
        printf("\nElement %d found at index %d\n" ,key, index + 1);
    }
    else
    {
        printf("\nElement %d not found\n" ,key);
    }

    return 0;
}