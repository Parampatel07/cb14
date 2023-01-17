// Write a programe to find factorial of given number
#include <stdio.h>
void main()
{
    int number, temp;
    long long int answer;
    printf("Enter value of number ");
    scanf("%d", &number);
    if (number > 0)
    {
        if (number == 1)
        {
            printf("1");
        }
        else
        {
            answer = number * (number - 1);
            for (temp = 2; temp < number; temp++)
            {
                answer = answer * (number - temp);
            }
            printf("the value of answer is %lld ", answer);
        }
    }
    else
    {
        printf("invalid input ");
    }
}