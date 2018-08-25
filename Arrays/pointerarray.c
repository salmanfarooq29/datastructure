#include <stdio.h>
int main()
{
    
    int arr[5] = {50,100,150,200,250};
    
    
    int *ptr;
    
    
    ptr = arr;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Value of *ptr = %d\n", *ptr);
        printf("Value of ptr = %p\n\n", ptr);
        
        
        ptr++;
    }
}
