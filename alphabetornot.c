#include<stdio.h>
#include<conio.h>
void main()
{
   char z;
   clrscr();
   printf("Enter\n");
   scanf("%c",&z);
   if((z>='a'&& z<='z')||(z>='A'&& z<='Z'))
   printf("Alphabet");
   else
   printf("Not");
   getch();
}
   
