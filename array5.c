#include<stdio.h>
void main()
{
    char name[20],count=0,copy_variable;
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
    copy_variable=count-1;
    for(count=copy_variable;count>=0;count--)
    {
        // if(name[count]=='\n')
        //     break;
        printf("%c",name[count]);
    }
}