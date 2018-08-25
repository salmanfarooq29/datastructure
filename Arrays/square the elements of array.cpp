#include <stdio.h>

int main()
{
    int arr[100];
    int size,i,square;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The squared array is: \n");
    for(i=0; i<size; i++)
    { 
	  square=arr[i]*arr[i];
	  printf(" %d ", square);
    }
    
   
}
