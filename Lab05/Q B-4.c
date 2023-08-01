#include <stdio.h>
int main()
{
    int EmpNo,count=0;
    double basicSal;

    printf("Enter employee number and basic salary \n");
    while (1)
    { scanf("%d", &EmpNo);
      if (EmpNo == -999)
      {break;}
      scanf("%l",&basicSal);
      if (basicSal >= 5000)
        {count++;}
     }
    printf("Number of employees with basic salary >= 5000 %d\n",count);
    }

