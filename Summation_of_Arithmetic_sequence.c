
#include<stdio.h>
int main()
{
    /* 1+2+3+4+5+6+7+8+9 = 45
       sum = 9*(9+1)/2 = 45
    */
    int Last_number;
    scanf("%d", &Last_number);
    int sum = Last_number*(Last_number+1)/2;

    printf("%d\n", sum);
}
