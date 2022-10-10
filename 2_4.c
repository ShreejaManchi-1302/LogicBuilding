/*4. Accept two numbers from user and display first number in second
number of times.
Input :
12
Output : 12 5
12 12
Input :
-2
Output : -2 3
-2 -2
Input :
21
Output : 21 -3
21 21
Input :
-2
Output : 0
12
12
*/
#include<stdio.h>
int Display( int iNo, int iFrequency)
{
 if(iFrequency<0){iFrequency=-iFrequency;}
int No1 =0;
for(No1=1;iFrequency>=No1; No1++)
{
printf("%d ",iNo);
}
}

int main()
{
int iValue = 0;
int iCount = 0;
printf("Enter number");
scanf("%d",&iValue);
printf("Enter frequency");
scanf("%d",&iCount);
Display(iValue,iCount);
}

/*
hreeja@shreeja-HP-Laptop-14-ck2xxx:~/Desktop/MY/LB/ASSIGNMENTS/LB-2$ ./2_4
Enter number12
Enter frequency5
12 12 12 12 12 shreeja@shreeja-HP-Laptop-14-ck2xxx:~/Desktop/MY/LB/ASSIGNMENTS/LB-2$ ./2_4
Enter number-2
Enter frequency3
-2 -2 -2 shreeja@shreeja-HP-Laptop-14-ck2xxx:~/Desktop/MY/LB/ASSIGNMENTS/LB-2$ ./2_4
Enter number21
Enter frequency-3
21 21 21 shreeja@shreeja-HP-Laptop-14-ck2xxx:~/Desktop/MY/LB/ASSIGNMENTS/LB-2$ ./2_4
Enter number-2
Enter frequency0
*/

