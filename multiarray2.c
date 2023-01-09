// Example of multiarray i/o
// Write a programe to accpet 5 student's 5 subject marks find sum all student 5 subject marks and average of 5 student
#include <stdio.h>
void main()
{
    int student[5][5], count = 0, flash = 0, sum[5];
    float average = 0;
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
    for (flash = 0; flash < 5; flash++)
    {
        printf("\nThe marks for student %d : ", flash + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\nsubject %d = %d", count + 1, student[flash][count]);
        }
    }
    flash = 0;
    do
    {
        sum[flash] = 0;
        count = 0;
        do
        {
            sum[flash] = sum[flash] + student[flash][count];
            count++;
        } while (count < 5);
        printf("\nthe total of student %d is %d ", flash + 1, sum[flash]);
        flash++;
    } while (flash < 5);

    average = 0;
    for(count=0;count<5;count++)
    {
        average = average + sum[count];
    }
    average = average /5 ;
    printf("\nthe average of all student is %f ",average);
    // average = average + sum[1];
    // average = average + sum[2];
    // average = average + sum[3];
    // average = average + sum[4];

    // sum[0] = 0;
    // count = 0;
    // do
    // {
    //     sum[0] = sum[0] + student[0][count];
    //     count++;
    // } while (count < 5);
    // printf("\nthe total of student 1 is %d ", sum[0]);
    // sum[1]=sum[1]+student[1][1];
    // sum[1]=sum[1]+student[1][2];
    // sum[1]=sum[1]+student[1][3];
    // sum[1]=sum[1]+student[1][4];
    // sum[0]=sum[0]+student[0][1];
    // sum[0]=sum[0]+student[0][2];
    // sum[0]=sum[0]+student[0][3];
    // sum[0]=sum[0]+student[0][4];

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