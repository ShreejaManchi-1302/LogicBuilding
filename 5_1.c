/*1.Write a program which accept number from user and display its multiplication of
factors.
Input :
Output : 12
144 (1 * 2 * 3 * 4 * 6)
Input :
Output : 13
1 (1)
Input :
Output : 10
10 (1 * 2 * 5)
*/

#include<stdio.h>
int MultFact(int iNo)
{
  int i = 0,iMult=1;
 if(iNo <= 0)
{
iNo = -iNo;
}
for(i = 1; i<=iNo ;i++)
{
if((iNo%i)==0)
{
 //printf("%d",i);

  iMult=iNo*i;
  }
}
return iMult;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = MultFact(iValue);
printf("%d",iRet);
return 0;
}
