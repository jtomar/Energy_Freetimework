/*
The information about colors is to be stored in bits of a char variable called color. 
The bit number 0 to 6, each represent 7 colors of a rainbow, i.e. bit 0 represents violet, 1 represents
indigo, and so on. Write a program that asks the user to enter a number and based on this number it reports
which colors in the rainbow does the number represents.
*/

#include <stdio.h>

int main()
{
    int num;
    int i, k, andmask;
    int count = 0;

    printf("Enter your Number: ");
    scanf("%d", &num);

    //bit 0- violet, bit 1 - indigo (vibgyor)
    if (num & 1) //oth bit
        printf("violet\n");
    if(num & 2) //1st bit
        printf("Indigo\n");
    if(num & 4) //2nd bit
        printf("Blue\n");
    if(num & 8) //3rd bit
        printf("Green\n");
    if(num & 16) //4th bit
        printf("Yellow\n");
    if(num & 32) //5th bit
        printf("Orange\n");
    if(num & 64) //6th bit
        printf("Red\n");
    /*else{
        printf("nothing matched\n");
    }*/
    return 0;
}