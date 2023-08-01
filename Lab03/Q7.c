#include <stdio.h>
int main()
{   char city;
    double basicSal,sales,grossRemuneration,additional_allowance=0.0,bonus=0;
    int yearofservice;

    printf("Enter the basic salary");
    scanf("%f",&basicSal);
    printf("Enter the monthly sales");
    scanf("%d",&sales);
    printf("Enter the city");
    scanf("%c",&city);
    printf("Enter the year of service");
    scanf("%d",&yearofservice);

    if (yearofservice > 5)
        {additional_allowance += 0.10*basicSal; }
    if (city == 'C')
        {additional_allowance += 2500; }
    if (basicSal >= 50000)
        {bonus += 0.15 * basicSal; }
     else if (basicSal >= 25000)
        {bonus += 0.12 * basicSal; }
     else
        {bonus += 0.10 * basicSal; }
   grossRemuneration = basicSal + additional_allowance + bonus;
printf("Gross Monthly Remuneration %.2f\n", grossRemuneration);   }

