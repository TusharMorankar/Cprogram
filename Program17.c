//demonstration of iteration using for loop
#include<stdio.h>


 void Display(int iValue)
{
   int iCnt = 0;
  //    1               2           3
   for(iCnt = 1;  iCnt <= iValue;  iCnt++)
   {
       printf("jay ganesh...\n");   //4
   } 
}

int main()
{
    int iNo = 0;

    printf("Enter the number of iteration :\n");
    scanf("%d",&iNo);

    Display(iNo);


    return 0;
}

// 1.write the commom statement in the loop block
// 2. check wheather the number of iteration are already known or not
// 3. if the iteration count is fixed then go for for loop
// 4. if iteration count is not fixed then go to while loop