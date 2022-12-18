#include<stdio.h>
#include<conio.h>
int fun(int x)
{
    int i,flag=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            flag++ ;
            break ;
        }
    }
    if((flag==0 )&& ('!=1'))
        return i ;
}
int main()
{
    int x ;
    printf("Enter a number\n");
    scanf("%d",&x);

    if(fun(x))
        printf("Yes its prime number\n");
    else
        printf("No its not prime number\n");
    return 0;
}
