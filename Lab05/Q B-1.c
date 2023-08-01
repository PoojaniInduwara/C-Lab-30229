#include <stdio.h>
int main()
{
    int num[10];
    int i,positiveCount=0,negativeCount=0,zeroCount=0;

    printf("Enter ten numbers\n");
    for (i=0;i<10;i++)
     { scanf("%d",&num[i]);}
    for (i=0;i<10;i++)
     {
        if (num[i]>0)
            {positiveCount++;}
        else if (num[i]<0)
            {negativeCount++;}
        else
            {zeroCount++;}
      }
    printf("Number of positive numbers %d\n",positiveCount);
    printf("Number of negative numbers %d\n",negativeCount);
    printf("Number of zeros: %d\n",zeroCount);

}

