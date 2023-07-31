#include <stdio.h>

int main()
{
    int no1,no2,temp;
    printf("Enter the first number");
    scanf("%d",&no1);
    printf("Enter the second number");
    scanf("%d",&no2);
    printf("Before swap:\n");
    printf("First number is %d\n",no1);
    printf("Second number is %d\n",no2);
    temp=no1;
    no1=no2;
    no2=temp;
    printf("After swap:\n");
    printf("First number is %d\n",no1);
    printf("Second number is %d\n",no2);
}


