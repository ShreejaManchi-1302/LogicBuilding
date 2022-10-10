/*5.Write a program which accept number from user and return difference between
summation of all its factors and non factors.

Input :
Output : 12
-34
Input :
Output : 10
-29
(16 - 50)
(8 - 37)
*/
#include<stdio.h>
int FactDiff(int iNo)
{
int i = 0,iSum1=0,iSum2=0;
if(iNo <= 0)
{
iNo = -iNo;
}
 for(i =1; i<=iNo ;i++)
 {
   if((iNo%i)==0)
  {
   //printf("%d",i);
   iSum1=iSum1+i;
   }
 }
 for(i =1; i<=iNo ;i++)
 {
   if((iNo%i)!=0)
  {
   //printf("%d",i);
   iSum2=iSum2+i;
   }
 }

return iSum1-iSum2;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = FactDiff(iValue);
printf("%d",iRet);
return 0;
}
