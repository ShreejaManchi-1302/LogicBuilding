/*
5. Accept number from user and check whether number is even or
odd.
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
{
  if(iNo%2==0)
    return 1;
  else
  return 0;
}
int main()
{
int iValue = 0;
BOOL bRet = FALSE;
printf("Enter number");
scanf("%d",&iValue);
bRet = ChkEven(iValue);
if(bRet==1)
{
  printf("%d is even",iValue);
}
else
{
 printf("%d is odd",iValue);
}
return 0;
}

/*
LB-2$ ./2_5
Enter number6
6 is evenshreeja@shreeja-HP-Laptop-14-ck2xxx:~/Desktop/MY/LB/ASSIGNMENTS/LB-2$ ./2_5
Enter number5
5 is odd
*
