#include<stdio.h>
#include<conio.h>
void fib(int);
int main()
{
    int num ;
    printf("Enter a number\n");
    scanf("%d",&num);
    fib(num);
    return 0;
}
void fib(int num)
{
    int a=0,b=1,i,c ;
    for(i=2;i<=num;i++)
    {
        c=a+b ;
        a=b ;
        b=c ;
        printf("%d ",c);
    }
}
