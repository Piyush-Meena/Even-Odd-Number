#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("Enter Any No= ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Number is Even");    
    }
    else
    {
     printf("Number is Odd");
    } 
    getch();
}
