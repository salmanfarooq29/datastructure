#include <stdio.h>
int main()
{
    int arr[100];
    int size,i,item,flag;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to be searched: ");
    scanf("%d", &item);

    
    for(i=0; i<size; i++)
    {
    
        if(arr[i] == item)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        printf("\n%d is found at position %d", item, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", item);
    }

    return 0;
}
