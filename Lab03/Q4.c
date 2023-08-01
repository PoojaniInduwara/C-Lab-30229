#include <stdio.h>
int main()
{
    float radius;
    const float PI=3.14159;

    printf("Enter the radius of the circle");
    scanf("%f",&radius);

    printf("Diameter is %f \n", 2*radius);
    printf("Circumference is %f \n", 2*PI*radius);
    printf("Area is %f \n", PI*radius*radius);

}

