#include<stdio.h>
#include<conio.h>
int square(int);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    printf("square is --> %d\n",square(n));
}
int square(int n)
{
    int ans ;
    ans = n*n ;
    return ans ;
}
