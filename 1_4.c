/*
4. Accept one number and check whether is is divisible by 5 or not.
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Check( int iNo)
{
if((iNo% 5) == 0)
{
return TRUE;
}
else
{
return FALSE;
}
}

int main()
{
int iValue = 0;
BOOL bRet = FALSE;
printf("Enter number");
scanf("%d",&iValue);
bRet = Check(iValue);
if(bRet == TRUE)
{
printf("Divisible by 5");
}
else
{
printf("Not Divisible by 5");
}
return 0;
}

/*
shreeja@shreeja-HP-Laptop-14-ck2xxx:~/Desktop/MY/LB/ASSIGNMENTS/LB-1$ ./1_4
Enter number 6
Not Divisible by 5shreeja@shreeja-HP-Laptop-14-ck2xxx:~/Desktop/MY/LB/ASSIGNMENTS/LB-1$ ./1_4
Enter number10
*/
