// Example of i/o in array
#include <stdio.h>
void main()
{
    int number[5], count = 0;

    for (count = 0; count < 5; count++)
    {
        printf("Enter number %d ", count + 1);
        scanf("%d", &number[count]);
    }
    // printf("Enter number 2 ");
    // scanf("%d",&number[1]);
    // printf("Enter number 3 ");
    // scanf("%d",&number[2]);
    // printf("Enter number 4 ");
    // scanf("%d",&number[3]);
    // printf("Enter number 5 ");
    // scanf("%d",&number[4]);
    count=0;
    while(count < 5 )
    {
        printf("\nthe value of number %d is %d",count+1,number[count]);
        count++;
    }
    // printf("\nthe value of number 2 is %d ",number[1]);
    // printf("\nthe value of number 3 is %d ",number[2]);
    // printf("\nthe value of number 4 is %d ",number[3]);
    // printf("\nthe value of number 5 is %d ",number[4]);
}