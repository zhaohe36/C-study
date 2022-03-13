#include<stdio.h>
#define N 10
void Sort(int c[])
{
int i,j,temp;
for (i=0;i<N-1;i++)
    {for (j=0;j<N-1-i;j++)
        if(c[j]<c[j+1])
        {
            temp = c[j];
            c[j] = c[j+1];
            c[j+1] = temp;
        }
    }
}

void Search(int c[],int n)
{
int a,e=0;
for (a=0;a<N;a++)
    if (n==c[a])
    {
        e =1;
        break;
    }
    
if (e =1)
    printf("找到数据，下标为:%d",a);
else
    printf("数据不存在");

}
main()
{
    int s;
int a[N]={1,2,4,3,5,7,2,9,10,11};
Sort(a);
int i;
printf("排序后：");
for (i=0;i<N;i++)
    printf("%d ",a[i]);
printf("要搜的数据:");
scanf("%d",&s);
Search(a,s);
}