/*4. Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d
*/
#include<stdio.h>
int DisplayConvert ( char cValue)
{
if(cValue<'a')
{
printf("%c" ,cValue+32);
}
else if((cValue>'A'))
{
printf("%c",cValue-32);
}
}

int main()
{
char cValue = '\0';
printf("Enter character\n");
scanf("%c",&cValue);
DisplayConvert(cValue );
return 0;
}
