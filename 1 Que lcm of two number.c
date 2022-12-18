#include<stdio.h>
#include<conio.h>
int fun(int x,int y)
{
    int i;

    for(i=x>y?x:y;i<=i+1;i++)
    {
        if(i%x==0 && i%y==0)
            return i ;
    }
}
int main()
{
    int x,y ;

    printf("Enter 2 number\n");
    scanf("%d%d",&x,&y);

    printf("LCM is %d\n",fun(x,y));
    return 0;
}
