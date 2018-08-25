#include<stdio.h>
#include<math.h>

 main()
{
    int arr[100];
    int size,i,sqroot;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The square roots of the elements of the array are: \n");
    for(i=0; i<size; i++)
    { 
	  sqroot= sqrt(arr[i]);
	  printf(" %d ", sqroot);
    }
}
