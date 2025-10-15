/*
 * Algorithm: Linear Search
 * Description: Searches for a given key in an array by checking each element sequentially.
 * Time Complexity: O(n) in the worst case
 * Space Complexity: O(1)
 */

#include <stdio.h>
#define MAX 500

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[MAX];
    int key, size, index; 

    printf("Enter the size of array :");
    scanf("%d", &size);

    if(size > MAX)
    {
        printf("\nSize Cannot exceed %d\n", MAX);
        return 1;
    }

    for (int i = 0; i < size ; i++)
    {
        printf("Enter Element [%d] :" ,i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search :");
    scanf("%d", &key);

    index = linearSearch(arr, size, key); //store the index

    if(index != -1)
    {
        printf("\nElement %d is found at index %d\n", key, index + 1);
    }
    else
    {
        printf("\nElement %d not found\n", key);
    }
    return 0;
}