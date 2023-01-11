// Write a programe to find bmi of user and give him/her his category of weight
// bmi = weight / height*height -> height in meter
// inch to meter = divide the length value by 39.37
// foot to meter = for an approximate result, divide the length value by 3.281
#include <stdio.h>
float getmeter(int foot,int inch)
{
    // printf("")
    float meter ;
    meter = (inch/39.37) + (foot / 3.281);
    // total_inch = foot *12 ;
    // total_inch = total_inch + inch
    // meter = total_inch /39.37
    printf("the value of meter is %f \n",meter);
    return meter;
}
float getbmi(float weight,float meter)
{
    return weight / (meter * meter);
}
void category(float bmi)
{
    if(bmi <= 18.5)
        printf("You are underweight ");
    else if(bmi >18.5 && bmi<=24.9)
        printf("You are normal ");
    else if(bmi>24.9 && bmi<=29.9)
        printf("You are overweight ");
    else if(bmi>29.9 && bmi<=34.9)
        printf("You are obese ");
    else if(bmi>34.9)
        printf("You are extremely obese ");
}
void main()
{
    int foot, inch;
    float weight,meter,bmi;
    printf("Enter value of foot ");
    scanf("%d", &foot);
    printf("Enter value of inch ");
    scanf("%d", &inch);
    printf("Enter value of weight ");
    scanf("%f", &weight);
    meter = getmeter(foot,inch);
    printf("the value of meter is %f ",meter);
    bmi = getbmi(weight,meter);
    printf("\nThe value of bmi is %f \n",bmi);
    category(bmi);
}