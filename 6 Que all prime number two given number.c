#include<stdio.h>
#include<conio.h>
void prime(int,int);
int main()
{
    int x,y ;
    printf("Enter two number :");
    scanf("%d%d",&x,&y);
    prime(x,y);
    return 0;
}
void prime(int x,int y)
{
    int i,j,flag ;
    for(i=x;i<=y;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag++ ;
                break;
            }
        }
        if(flag==0 && i!=1)
        {
            printf("%d\n",i);
        }
    }
}
