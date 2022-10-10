/*
Accept one number from user and print that number of * on screen.
*/
#include<stdio.h>
void Display(int iNo)
{
  if(iNo<0)
  {
   iNo=-iNo;
  }
while(iNo >0)
{
printf("*");
iNo--;
}
}
int main()
{
int iValue = 0;
printf("Enter number");
scanf("%d",&iValue);
Display(iValue);
return 0;
}

/*
LB-2$ ./2_2
Enter number6
******shreeja@shreeja-HP-Laptop-14-ck2xxx:~/Desktop/MY/LB/ASSIGNMENTS/LB-2$ ./2_2
Enter number-6
******
*/

