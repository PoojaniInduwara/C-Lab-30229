#include <stdio.h>
int main()
{
    int marks[10];
    int total=0;
    float average;

    printf("Enter 10 marks\n");
    for (int i=0;i<10;i++)
     {
        scanf("%d",&marks[i]);
        total += marks[i];
      }

    average = total / 10;

    printf("Total is %d\n",total);
    printf("Average is %.2f\n",average);

    if (average<50)
        {printf("Fail\n");}
    else
        {printf("Pass\n");}

}

