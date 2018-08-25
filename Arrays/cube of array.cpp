#include <stdio.h>

int main()
{
    int arr[100];
    int size,i,cube;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The cubes of the elemnts of the array are: \n");
    for(i=0; i<size; i++)
    { 
	  cube=arr[i]*arr[i]*arr[i];
	  printf(" %d ", cube);
    }
    
   
}
