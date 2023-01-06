// Write a programe to sort an array in descending order
#include <stdio.h>
void main()
{
    int size = 0;
    printf("Enter total number ");
    scanf("%d",&size);
    int numbers[size], count = 0, temp = 0,flash;

    for (count = 0; count < size; count++)
    {
        printf("Enter value of number %d ", count + 1);
        scanf("%d", &numbers[count]);
    }
    // printf("Enter value of number 2 ");
    // scanf("%d",&number[1]);
    // printf("Enter value of number 3 ");
    // scanf("%d",&number[2]);
    // printf("Enter value of number 4 ");
    // scanf("%d",&number[3]);
    // printf("Enter value of number 5 ");
    // scanf("%d",&number[4]);
    printf("\n\nThis is without sorting array ");
    for (count = 0; count < size; count++)
    {
        printf("\nthe value of number %d is %d ", count + 1, numbers[count]);
    }
    // printf("the value of number 2 is %d ",numbers[1]);
    // printf("the value of number 3 is %d ",numbers[2]);
    // printf("the value of number 4 is %d ",numbers[3]);
    // printf("the value of number 5 is %d ",numbers[4]);

    for(flash = 0 ; flash< size; flash++)
    {
        for (count = flash; count < size; count++)
        {
            if (numbers[flash] < numbers[count])
            {
                temp = numbers[flash];
                numbers[flash] = numbers[count];
                numbers[count] = temp;
            }
        }
    }
    // for (count = 2; count < 5; count++)
    // {
    //     if (numbers[1] < numbers[count])
    //     {
    //         temp = numbers[1];
    //         numbers[1] = numbers[count];
    //         numbers[count] = temp;
    //     }
    // }
    // for(count=3 ; count<5 ; count++)
    // {
    //     if (numbers[2] < numbers[count])
    //     {
    //         temp = numbers[2];
    //         numbers[2] = numbers[count];
    //         numbers[count] = temp;
    //     }
    // }
    // if(numbers[1] < numbers[3])
    // {
    //     temp=numbers[1];
    //     numbers[1]=numbers[3];
    //     numbers[3]=temp;
    // }
    // if(numbers[1]<numbers[4])
    // {
    //     temp=numbers[1];
    //     numbers[1]=numbers[4];
    //     numbers[4]=temp;
    // }
    // if(numbers[0] < numbers[2])
    // {
    //     temp = numbers[0];
    //     numbers[0]=numbers[2];
    //     numbers[2]=temp;
    // }
    // if(numbers[0] < numbers[3])
    // {
    //     temp = numbers[0];
    //     numbers[0]=numbers[3];
    //     numbers[3]=temp;
    // }

    printf("\n\nThis is with sorting array ");
    for (count = 0; count < size; count++)
    {
        printf("\nthe value of number %d is %d ", count + 1, numbers[count]);
    }
}