#include<stdio.h>
#include<conio.h>
void prime(int);
int main()
{
    int m ;

    printf("Enter a number :");
    scanf("%d",&m);
    prime(m);
    return 0;
}
void prime(int m)
{
    int n,i,fleg ;
    for(n=1;n<=m;n++)
    {
        fleg=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                fleg++ ;
                break ;
            }
        }
        if(fleg==0 && n!=1)
            printf("%d\n",n);
    }
}
