/*Write a program which accept one number from user and print that number of
even numbers on screen.
Input : 7
Output: 2
4
6
8
10
12
14
*/
#include<stdio.h>
void PrintEven(int iNo)
{
int iCnt,i=0;
if(iNo<0)
{
return;
}
 for(iCnt=1,i=1;iCnt<=iNo;i++)
 { 
 if(i%2==0)
 {
   printf("%d",i);
   iCnt++;
 }
}
}
int main()
{
int iValue = 0;
printf("Enter number\n");
scanf("%d",&iValue);
PrintEven(iValue);
return 0;
}
