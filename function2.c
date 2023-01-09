// example of function without retrun value and with agrument 
#include<stdio.h>
#include<stdlib.h>
void printsign(char sign,int sz)
{
    for(int count=0;count<sz;count++)
    {
        printf("%c",sign);
    }
}
void main()
{
    char sign ;
    int size ;
    printf("Enter the size of line ");
    scanf("%d",&size);
    fflush(stdin);
    printf("Enter the sign ");
    scanf("%c",&sign);
    printsign(sign,size);
}
