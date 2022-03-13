#include<stdio.h>
void Insertsort(int a[],int len)
{
int i,j;
for (i=1;i<len;i++)
{   
    if(a[i]<a[i-1])
        {
            j=i-1;
            int x = a[i];//定位小的数
            while(j>-1 && x < a[j])
            {  //采用顺序查找方式找到插入的位置，在查找的同时，将数组中的元素进行后移操作，给插入元素腾出空间
                a[j+1] = a[j];
                j--;
            }
            //结束的时候是a[j]<x或者是j到-1，则插入在j+1处或0处
            a[j+1] = x;      //插入到正确位置
        }
   
}


}
int main(void)
{
    int b[]={1,3,2,5325,11,0,3232,23};
    Insertsort(b,8);
    for(int i =0;i<8;i++)
    
    printf("%d  ",b[i]);


    return 0;
}