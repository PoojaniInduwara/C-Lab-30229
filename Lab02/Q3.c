#include <stdio.h>

int main()
{
	float dist,time,averagespeed;
	printf("Enter the distance traveled");
	scanf("%f",&dist);
	printf("Enter the time taken");
	scanf("%f",&time);
    averagespeed=dist/time;
    printf("average speed is %.2fm/s\n",averagespeed);  }

