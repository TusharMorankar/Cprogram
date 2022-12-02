
#include<stdio.h>

int Summation()
{
   int iNO1 = 1;
   int iNO2 = 2;
   int iNO3 = 3;
   int iNO4 = 4;
   int iNO5 = 5;
   int iSum = 0;


   iSum = iNO1 + iNO2 + iNO3 + iNO4 + iNO5;

   return iSum;

}
int main()
{
   int iRet = 0;

   iRet = Summation();

   printf("Summation is %d\n",iRet);



   return 0;



}


   


