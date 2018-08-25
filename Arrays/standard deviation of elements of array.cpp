#include <stdio.h>
#include <math.h>

main()
{

    float arr[100];

    int  i, n;

    float average, variance, std_deviation, sum = 0, sum1 = 0;

   printf("Enter size of array: \n");
   scanf("%d", &n);

    printf("Enter elements of the array \n");

    for (i = 0; i < n; i++)

    {
	 scanf("%f", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
      sum = sum + arr[i];
	}

    average = sum / (float)n;

    for (i = 0; i < n; i++)
    {
     sum1 = sum1 + pow((arr[i] - average), 2);
	}

    variance = sum1 / (float)n;

    std_deviation = sqrt(variance);

    printf("Standard deviation = %.2f\n", std_deviation);

}
