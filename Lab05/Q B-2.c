#include <stdio.h>
int main()
 {
    int marks[10];
    int i,totalMarks=0,maxMarks,minMarks;
    double average,total;

    printf("Enter marks of 10 students\n");
    for (i=0;i<10;i++)
      { scanf("%d",&marks[i]);
        totalMarks += marks[i];

        if (i==0)
         {  maxMarks = marks[i];
            minMarks = marks[i];    }
        else
         {   if(marks[i]>maxMarks)
             {maxMarks = marks[i];}
             if(marks[i]<minMarks)
             {minMarks = marks[i];}     }
       }
    average = total/10;

    printf("Maximum Mark is %d\n", maxMarks);
    printf("Minimum Mark is %d\n", minMarks);
    printf("Average Mark is %.2f\n", average);        }

