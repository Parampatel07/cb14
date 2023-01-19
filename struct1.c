// Write a programe to take input of 3 countries time accpet hours , minutes.seconds , countryies first letter from user 
#include<stdio.h>
#include<stdlib.h>
struct time
{
     int hours;
     float minutes_second;
     char name;
}t3;
void main()
{
     struct time t1,t2 ;
     printf("Enter time of first country ");
     printf("\nEnter hours : ");
     scanf("%d",&t1.hours);
     printf("Enter minutes and seconds ");
     scanf("%f",&t1.minutes_second);
     fflush(stdin);
     printf("Enter first letter ");
     scanf("%c",&t1.name);

     printf("Enter time of second country ");
     printf("\nEnter hours : ");
     scanf("%d",&t2.hours);
     printf("Enter minutes and seconds ");
     scanf("%f",&t2.minutes_second);
     fflush(stdin);
     printf("Enter first letter ");
     scanf("%c",&t2.name);

     printf("Enter time of third country ");
     printf("\nEnter hours : ");
     scanf("%d",&t3.hours);
     printf("Enter minutes and seconds ");
     scanf("%f",&t3.minutes_second);
     fflush(stdin);
     printf("Enter first letter ");
     scanf("%c",&t3.name);
     
     printf("\n\nThe time for first country is %d : %.2f and first letter is %c ",t1.hours,t1.minutes_second,t1.name);
     printf("\n\nThe time for Second country is %d : %.2f and first letter is %c ",t2.hours,t2.minutes_second,t2.name);
     printf("\n\nThe time for Third country is %d : %.2f and first letter is %c ",t3.hours,t3.minutes_second,t3.name);
}