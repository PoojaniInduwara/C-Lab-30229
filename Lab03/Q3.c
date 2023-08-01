#include <stdio.h>
int main()
{
    char empName[50];
    float basicSal, newSalary, inc;

    printf("Enter employee name");
    scanf("%s",&empName);
    printf("Enter basic salary");
    scanf("%f",&basicSal);

    if (basicSal<5000)
        inc = basicSal*0.05;
     else if (basicSal >= 5000)
        inc = basicSal*0.1;
     else if (basicSal < 10000)
        inc = basicSal*0.1;
     else
        inc = basicSal*0.15;

    newSalary = basicSal + inc;

    printf("Employee Name %s \n", empName);
    printf("New Salary %.2f \n", newSalary);

}

