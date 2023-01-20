// Example of multiarray i/o
// 4]Write a programe to take 5 cricketer run for 5 matches and find sum and lowest runscorer
#include <stdio.h>
void main()
{
     int student[5][5], count = 0, flash = 0, sum[5], min = 0, temp = 0;
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

     for (flash = 0; flash < 5; flash++)
     {
          for (count = 0; count < 5; count++)
          {
               if (student[flash][0] > student[flash][count])
               {
                    temp = student[flash][0];
                    student[flash][0] = student[flash][count];
                    student[flash][count] = temp;
               }
          }
     }
     printf("\n\nthe lowest value is %d ", student[0][0]);
     printf("\nthe lowest value is %d ", student[1][0]);
     printf("\nthe lowest value is %d ", student[2][0]);
     printf("\nthe lowest value is %d ", student[3][0]);
     printf("\nthe lowest value is %d ", student[4][0]);
     for (count = 0; count < 5; count++)
     {
          if (student[0][0] > student[count][0])
          {
               temp = student[0][0];
               student[0][0] = student[count][0];
               student[count][0] = temp;
          }
     }

     printf("\n\nthe lowest of all value is %d ", student[0][0]);
     // if(student[0][0]>student[0][2])
     // {
     //      temp=student[0][0];
     //      student[0][0]=student[0][2];
     //      student[0][2]=temp;
     // }
}