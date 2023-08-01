#include <stdio.h>

void cal_ScalarSum(int arr[], int size)
{
    int scalarSum = 0;
    for (int i = 0; i < size; i++)
        {scalarSum += arr[i];}
    printf("Scalar Sum is %d\n", scalarSum);
}

void cal_VectorSum(int arr1[], int arr2[], int arr3[], int size)
{
    for (int i=0; i<size; i++)
        {arr3[i] = arr1[i] + arr2[i];}
}

int main()
{
    int size;
    printf("Enter the size of arrays ");
    scanf("%d", &size);

    int arr1[size], arr2[size], VectorSum[size];

    printf("Enter %d elements for arr1\n", size);
    for (int i = 0; i < size; i++)
        {scanf("%d", &arr1[i]);}

    printf("Enter %d elements for arr2\n", size);
    for (int i = 0; i < size; i++)
        {scanf("%d", &arr2[i]);}

    cal_ScalarSum(arr1, size);
    cal_ScalarSum(arr2, size);

    cal_VectorSum(arr1, arr2, VectorSum, size);

    printf("Vector Sum:\n");
    for (int i = 0; i < size; i++)
        {printf("%d ", VectorSum[i]);}

    printf("\n");

    return 0;
}

