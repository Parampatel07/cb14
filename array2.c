// Write a programe to findout sum and average for 5 student marks 
#include<stdio.h>
void main()
{
    int student[5], count = 0, sum = 0;
    float average=0;
    for (count = 0; count < 5; count++)
    {
        printf("Enter marks of student %d ", count + 1);
        scanf("%d", &student[count]);
    }
    // printf("Enter marks of student 2 ");
    // scanf("%d",&student[1]);
    // printf("Enter marks of student 3 ");
    // scanf("%d",&student[2]);
    // printf("Enter marks of student 4 ");
    // scanf("%d",&student[3]);
    // printf("Enter marks of student 5 ");
    // scanf("%d",&student[4]);
    for (count = 0; count < 5; count++)
    {
        printf("\nthe marks of student %d is %d ", count + 1, student[count]);
    }
    // printf("the marks of student 1 is %d ",student[0]);
    // printf("the marks of student 1 is %d ",student[0]);
    // printf("the marks of student 1 is %d ",student[0]);
    // printf("the marks of student 1 is %d ",student[0]);
    count=0;
    while(count<5)
    {
        sum = sum + student[count];
        count++;
    }
    // sum = sum + student[1];
    // sum = sum + student[2];
    // sum = sum + student[3];
    // sum = sum + student[4];
    printf("\nthe value of sum is %d ", sum);
    average = sum / 5;
    printf("\nthe value of average is %f ",average);
}