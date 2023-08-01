#include <stdio.h>
int main()
{    int num,sum=0;
    printf("Enter numbers except -1 \n");
    while (1)
      {  scanf("%d",&num);
        if (num == -1)
        {break;}
        sum += num;
    }
    printf("The sum is %d\n", sum);
     }

