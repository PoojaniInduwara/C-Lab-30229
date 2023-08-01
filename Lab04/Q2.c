#include <stdio.h>
int main()
{
    int choice;
    float no1,no2,result;

    printf("Menu is\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice");
    scanf("%d",&choice);
    printf("Enter two numbers");
    scanf("%f%f",&no1,&no2);
    switch (choice)
        {   case 1:result = no1+no2;
               printf("Result is %.2f\n", result);break;
             case 2:result = no1-no2;
               printf("Result is %.2f\n", result);break;
             case 3:result = no1*no2;
               printf("Result is %.2f\n", result);break;
             case 4: if (no2 != 0)
                    { result = no1/no2;
                    printf("Result is %.2f\n", result); }
                           else
                   { printf("Invalid :Division by zero is meaningless\n");} break;
        default:
            printf("Choice is invalid\n"); }  }
