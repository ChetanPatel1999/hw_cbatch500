//wap to print your friend name according to frist latter of name.
#include<stdio.h>
void main()
{
    char ch;
    printf("enter first latter of name :");
    scanf("%c",&ch);//s
    switch(ch)
    {
        case 'k': printf("kuber yadav");break;
        case 'r': printf("raj choudhary");break;
        case 's': printf("sahaj chhabra");break;
        case 'c': printf("chetan patel");break;
        default:printf("you have not friend which name start %c later",ch);
    }
}