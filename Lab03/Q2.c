#include <stdio.h>
int main()
{
    int no1,no2,no3;
    int largest,smallest;
    printf("Enter the first number");
    scanf("%d",&no1);
    printf("Enter the second number");
    scanf("%d",&no2);
    printf("Enter the third number");
    scanf("%d",&no3);

    largest=smallest=no1;

    if (no2>largest)
        largest = no2;
    else if (no2 < smallest)
        smallest = no2;
    if (no3 > largest)
        largest = no3;
    else if (no3 < smallest)
        smallest = no3;

    printf("The largest number is %d\n",largest);
    printf("The smallest number is %d\n",smallest);
}

