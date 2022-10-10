/*
Accept on number from user if number is less than 10 then print
"Hello" otherwise print "Demo"
*/
#include<stdio.h>
int Display ( int iNo)
{
if(iNo<10 )
{
printf("Hello");
}
else
{
printf("Demo");
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
LB-2$ ./2_3
Enter number6
Helloshreeja@shreeja-HP-Laptop-14-ck2xxx:~/Desktop/MY/LB/ASSIGNMENTS/LB-2$ ./2_3
Enter number11
Demo
*/
