// Write a programe to take input of 3 countries time accpet hours , minutes.seconds , countryies first letter from user
//Example of array of structure
#include <stdio.h>
#include <stdlib.h>
struct time
{
     int hours;
     float minutes_second;
     char name;
};
void main()
{
     struct time t[3];
     int count;
     for (count = 0; count < 3; count++)
     {
          printf("Enter time of %d country ",count+1);
          printf("\nEnter hours : ");
          scanf("%d", &t[count].hours);
          printf("Enter minutes and seconds ");
          scanf("%f", &t[count].minutes_second);
          fflush(stdin);
          printf("Enter first letter ");
          scanf("%c", &t[count].name);
     }

     // printf("Enter time of second country ");
     // printf("\nEnter hours : ");
     // scanf("%d",&t[1].hours);
     // printf("Enter minutes and seconds ");
     // scanf("%f",&t[1].minutes_second);
     // fflush(stdin);
     // printf("Enter first letter ");
     // scanf("%c",&t[1].name);

     // printf("Enter time of third country ");
     // printf("\nEnter hours : ");
     // scanf("%d",&t[2].hours);
     // printf("Enter minutes and seconds ");
     // scanf("%f",&t[2].minutes_second);
     // fflush(stdin);
     // printf("Enter first letter ");
     // scanf("%c",&t[2].name);

     for(count=0;count<3;count++)
          printf("\n\nThe time for %d country is %d : %.2f and first letter is %c ",count+1,t[count].hours,t[count].minutes_second,t[count].name);
     // printf("\n\nThe time for Second country is %d : %.2f and first letter is %c ",t[1].hours,t[1].minutes_second,t[1].name);
     // printf("\n\nThe time for Third country is %d : %.2f and first letter is %c ",t[2].hours,t[2].minutes_second,t[2].name);
}