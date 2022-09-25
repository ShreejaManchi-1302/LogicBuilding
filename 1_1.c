/*
 Program to divide two numbers
*/
#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
  int iAns=0;
  if(iNo2<=0)
  {
    return -1;
  }
  iAns=iNo1/iNo2;
   return iAns;
}

int main()
{
int iValue1 = 0, iValue2 = 0;
int iRet = 0;
printf("ENter two numbers to divide\n");
scanf("%d%d",&iValue1,&iValue2);
iRet = Divide(iValue1,iValue2);
printf("Division is %d",iRet);
return 0;
}
/*

LB-1$ ./1_1
ENter two numbers to divide
6
3
Division is 2
*/
