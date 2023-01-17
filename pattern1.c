// Write a programe to print hollow numbered triagnle
#include <stdio.h>
void main()
{
     int count = 0, flash,adder=1,myprint=2;
     for (count = 0; count <= 6; count++)
     {
          printf(" ");
     }
     printf("1");
     printf(" ");
     printf("\n");
     // for (count = 0; count < 5; count++)
     // {
     //      printf(" ");
     // }
     // for (flash = 0; flash < 2; flash++)
     // {
     //      printf("*");
     //      printf(" ");
     // }
     // printf("\n");
     // for (count = 0; count < 4; count++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // for (count = 0; count < 3; count++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf("\n");
     // for (count = 0; count < 3; count++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // for (flash = 0; flash < 5; flash++)
     // {
     //      printf(" ");
     // }
     // printf("*");
     // printf("\n");
     for (int temp = 6; temp > 0; temp--)
     {
          for (count = 0; count < temp; count++)
          {
               printf(" ");
          }
          printf("1");
          for (flash = 1; flash <= adder; flash++)
          {
               printf(" ");
          }
          printf("%d",myprint);
          printf("\n");
          adder = adder+2;
          myprint++;
     }

     for (count = 1; count <= 8; count++)
     {
          printf("%d ", count);
     }
}