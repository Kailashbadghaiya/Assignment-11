#include<stdio.h>
#include<conio.h>
int fun(int n)
{
    int i,x ;
    for(i=n+1;i>0;i++)
    {
        for(x=2;x<i;x++)
        {
            if(i%x==0)
                break ;
        }
        if(i==x)
            break ;
    }
    return i ;
}
int main()
{
    int i,n ;
    printf("Enter a number :\n");
    scanf("%d",&n);
    printf("Next prime number is %d\n",fun(n));
    return 0;
}
