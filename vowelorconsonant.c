#include<stdio.h>
#include<conio.h>
void main()
{
    char z;
    clrscr();
    printf("Enter the letter\n");
    scanf("%c",&z);
    if(z=='a'||z=='e'||z=='i'||z=='o'||z=='u'||z=='A'||z=='E'||z=='O'||z=='U'||z=='I')
    printf("The letter is vowel");
    else
    printf("The letter is consonant");
    getch();
}
