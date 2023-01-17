// Write a programe to print inverted hollow full pyramid
// https://i1.faceprep.in/fp/articles/img/46684 1580817324.png
#include <stdio.h>
void main()
{
    int row = 0, space = 0 ,flash=1,temp=7;
    while(flash<8)
    {
        for (row = 0; row < temp; row++)
        {
            printf("* ");
        }
        printf("\n");
        for (space = 0; space < flash; space++)
        {
            printf(" ");
        }
        flash++;
        temp--;
    }
    // for (row = 0; row < 6; row++)
    // {
    //     printf("* ");
    // }
    // printf("\n");
    // for (space = 0; space < 2; space++)
    // {
    //     printf(" ");
    // }
    // for (row = 0; row < 5; row++)
    // {
    //     printf("* ");
    // }
    // printf("\n");
    // for (space = 0; space < 3; space++)
    // {
    //     printf(" ");
    // }
    // for (row = 0; row < 4; row++)
    // {
    //     printf("* ");
    // }
    // printf("\n");
    // for (space = 0; space < 4; space++)
    // {
    //     printf(" ");
    // }
    // for (row = 0; row < 3; row++)
    //     printf("* ");
    // printf("\n");
    // for (space = 0; space < 5; space++)
    // {
    //     printf(" ");
    // }
    // for (row = 0; row < 2; row++)
    //     printf("* ");
    // printf("\n");
    // for(space=0 ;space<6;space++)
    // {
    //     printf(" ");
    // }
    // printf("*");
}