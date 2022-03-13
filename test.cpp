#include<stdio.h>
void ex(int* &a,int* &b)
{
int *temp=a;
a=b;
b=temp;


}
int main()
{ 
    int a=1,b=3;
    int *p1=&a,*p2=&b;
    ex(p1,p2);
    printf("%d %d",*p1,*p2);

    return 0;
}