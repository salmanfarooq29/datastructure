//Write a Program which perform traversing operation.

#include <stdio.h>
int main()
{
    int arr[] = {5,10,15,20,25};
    int i, n = 5;
    
    printf("The elements of the array are:\n");
    
    for(i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}
