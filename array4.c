// Write a programe to accept name as an input from user and print it
#include <stdio.h>
void main()
{
    char name[20], count = 0;
    printf("Enter your name ");
    while (count < 20)
    {
        scanf("%c", &name[count]);
        if (name[count] == '\n')
        {
            break;
        }
        count++;
    }
    // scanf("%c",&name[1]);
    // scanf("%c",&name[2]);
    // scanf("%c",&name[3]);
    // scanf("%c",&name[4]);
    // scanf("%c",&name[5]);
    // scanf("%c",&name[6]);
    // scanf("%c",&name[7]);
    count=0;
    printf("Your name is : ");
    while(count<20)
    {
        if(name[count]=='\n')
        {
            break;
        }
        printf("%c", name[count]);
        count++;
    }
}