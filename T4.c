#include<stdio.h>
void fib(int n)
{
int loop,f1,f2,temp;
f1=1;
f2=1;
if(n<=2)
    printf("第%d项为1",n);
else
{for(loop=3;loop<=n;loop++)
        {temp = f1;
        f1= f1+f2;
        f2 = temp;}
    printf("第%d项为%d",n,f1);
}



}
int main(void)
{

int n;
printf("请输入要计算的斐波那契数列第几项\n:");

scanf("%d",&n);
fib(n);

return 0;

}