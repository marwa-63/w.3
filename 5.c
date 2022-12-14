#include <stdio.h>
#include <stdlib.h>
int Fibonacci(int n)
{
    int a=0,b=1,res;
    if(n==0)
        a=0;
    else if(n==1)
        a=1;
    else
       {
    for(int i=1;i<=n;i++)
    {
    res=a+b;
    a=b;
    b=res;
    }
       }
    return a;
}
int main()
{ int x,f;
    printf("Enter the number:");
    scanf("%d",&x);
 f=Fibonacci(x);
 printf("The fibonacci of the number is :%d",f);
    return 0;
}
