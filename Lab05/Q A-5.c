#include <stdio.h>
int main() {
    int num,reversed_Number=0,remainder;

    printf("Enter a number ");
    scanf("%d",&num);
    do  { (remainder = num%10);
          reversed_Number = (reversed_Number*10)+remainder;
           num = num/10; }
    while (num != 0);
    printf("Reversed number is %d\n", reversed_Number);
}


