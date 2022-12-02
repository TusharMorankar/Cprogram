
#include<stdio.h>


 void Display()
{
   int iCnt = 0;


    iCnt = 1;   //1
    while(iCnt <= 5)   //2
    {
       printf("jay ganesh..\n");  //4
       iCnt++;    //3
    }
}


int main()
{
    Display();


    return 0;
}

// 1.write the commom statement in the loop block
// 2. check wheather the number of iteration are already known or not
// 3. if the iteration count is fixed then go for for loop
// 4. if iteration count is not fixed then go to while loop