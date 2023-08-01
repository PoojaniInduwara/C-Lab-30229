#include <stdio.h>
int main()
{
    int choice;
    float radius,result,PI;

    printf("Menu is\n");
    printf("1. Calculate Circumference of a Circle\n");
    printf("2. Calculate Area of a Circle\n");
    printf("3. Calculate Volume of a Sphere\n");
    printf("Enter your choice ");
    scanf("%d",&choice);
    printf("Enter the radius: ");
    scanf("%f",&radius);

    switch (choice)
     {
        case 1:result = 2*PI*radius;
               printf("Circumference is %.2f\n", result);break;
        case 2:result = PI*radius*radius;
               printf("Area is %.2f\n", result);break;
        case 3:result = (4.0/3.0)*PI*radius*radius*radius;
               printf("Volume is %.2f\n", result);break;
        default:printf("Choice is invalid\n");
    }
}

