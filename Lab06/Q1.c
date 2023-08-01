#include <stdio.h>

int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i=1; i<n;i++)
    {
        if (arr[i] < min)
        {min = arr[i];}
    }
    return min;
}

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i=1; i<n; i++)
      {
        if (arr[i] > max)
        {max = arr[i];}
      }
    return max;
}

float findAvg(int arr[], int n)
{
    int sum = 0;
    for (int i=0; i<n; i++)
        {sum += arr[i];}
    return sum/n;
}

void Rev_arr(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}

int main()
{
    int arr[10];
    printf("Please enter 10 values for the array:\n");
    for (int i=0; i<10; i++)
    {scanf("%d", &arr[i]);}


    int min_value = findMin(arr, 10);
    printf("Minimum value is %d\n", min_value);

    int max_value = findMax(arr, 10);
    printf("Maximum value is %d\n", max_value);

    float average_value = findAvg(arr, 10);
    printf("Average value is %.2f\n", average_value);

    Rev_arr(arr, 10);

    printf("Reversed array is ");
    for (int i=0; i<10; i++)
     {printf("%d ", arr[i]);}

    printf("\n");

    return 0;
}

