//Accept full name from user and print to display

#include<stdio.h>
#include<stdbool.h>

int main()
{
    char Arr[50];

    printf("Please Enter your full name\n");
    //scanf("%s",Arr);
    scanf("%[^'\n]s",Arr);

    printf("Your name is : %s\n",Arr);

    return 0;
}