#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("sum is %d ",fact(n));
}
int fact(int n)
{
    int ans ;
    while(n!=0)
    {
        ans = n+ans ;
        n-- ;
    }
    return ans ;

}
