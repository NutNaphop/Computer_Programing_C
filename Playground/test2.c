#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d",&num);
    for (int i=2; i<num; i++)
    {
        for (int j=2; j<=i; j++)   // Changed upper bound
        {
            if (i == j)  // Changed condition and reversed order of if:s
                printf("%d\n",i);
            else if (i%j == 0)
                break;
        }
    }
    puts("And Contain with 1 But I want to place at the end ! ");
}