// Example of multiarray i/o
// Write a programe to accpet 5 student's 5 subject marks
#include <stdio.h>
void main()
{
    int student[5][5], count = 0, flash = 0;

    for (flash = 0; flash < 5; flash++)
    {
        printf("Enter marks for student %d \n", flash + 1);
        while (count < 5)
        {
            printf("For subject %d ", count + 1);
            scanf("%d", &student[flash][count]);
            count++;
        }
        count = 0;
    }
    for(flash=0;flash<5;flash++)
    {
        printf("\nThe marks for student %d : ",flash+1);
        for (count = 0; count < 5; count++)
        {
            printf("\nsubject %d = %d", count + 1, student[flash][count]);
        }
    }
    // printf("\nThe marks for student 2 : ");
    // for(count=0;count<5;count++)
    // {
    //     printf("\nsubject %d = %d",count+1,student[1][count]);
    // }

    // printf("\nsubject 2 = %d",student[1][1]);
    // printf("\nsubject 3 = %d",student[1][2]);
    // printf("\nsubject 4 = %d",student[1][3]);
    // printf("\nsubject 5 = %d",student[1][4]);
    // printf("\nsubject 2 = %d",student[0][1]);
    // printf("\nsubject 3 = %d",student[0][2]);
    // printf("\nsubject 4 = %d",student[0][3]);
    // printf("\nsubject 5 = %d",student[0][4]);

    // printf("\nEnter marks for student 2 \n");
    // count = 0;
    // while (count < 5)
    // {
    //     printf("For subject %d ", count + 1);
    //     scanf("%d", &student[1][count]);
    //     count++;
    // }
    // printf("\nEnter marks for student 3 \n");
    // count=0;
    // while(count<5)
    // {
    //     printf("For subject %d ",count+1);
    //     scanf("%d", &student[2][count]);
    //     count++;
    // }
    // printf("For subject 2 ");
    // scanf("%d",&student[2][1]);
    // printf("For subject 3 ");
    // scanf("%d",&student[2][2]);
    // printf("For subject 4 ");
    // scanf("%d",&student[2][3]);
    // printf("For subject 5 ");
    // scanf("%d",&student[2][4]);
    // printf("For subject 2 ");
    // scanf("%d",&student[1][1]);
    // printf("For subject 3 ");
    // scanf("%d",&student[1][2]);
    // printf("For subject 4 ");
    // scanf("%d",&student[1][3]);
    // printf("For subject 5 ");
    // scanf("%d",&student[1][4]);
    // printf("For subject 2 ");
    // scanf("%d",&student[0][1]);
    // printf("For subject 3 ");
    // scanf("%d",&student[0][2]);
    // printf("For subject 4 ");
    // scanf("%d",&student[0][3]);
    // printf("For subject 5 ");
    // scanf("%d",&student[0][4]);
}