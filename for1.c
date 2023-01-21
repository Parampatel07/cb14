#include <stdio.h>
void main()
{
     int space, inner_space, star,count=1;
     for (space = 0; space < 6; space++)
     {
          printf("_");
     }
     printf("*");
     printf("\n");
     for(star=5;star>0;star--)
     {
          for (space = 0; space < star; space++)
          {
               printf("_");
          }
          printf("*");
          for (inner_space = 0; inner_space < count; inner_space++)
          {
               printf("_");
          }
          count=count+2;
          printf("*");
          printf("\n");
     }
     count=9;
     for(star=0;star<5;star++)
     {
          for (space = 0; space <= star; space++)
          {
               printf("_");
          }
          printf("*");
          for (inner_space = 0; inner_space < count; inner_space++)
          {
               printf("_");
          }
          count=count-2;
          printf("*");
          printf("\n");
     }
      for (space = 0; space < 6; space++)
     {
          printf("_");
     }
     printf("*");
     printf("\n");
}