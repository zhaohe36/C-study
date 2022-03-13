#include<stdio.h>
void swap(int *a,int *b) //交換兩個變數
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[], int len)
{
    int i,j;

        for (i = 0 ; i < len - 1 ; i++)
    {
                int min = i;
                for (j = i + 1; j < len; j++)     //走訪未排序的元素
                        if (arr[j] < arr[min])    //找到目前最小值
                                min = j;    //紀錄最小值
                swap(&arr[min], &arr[i]);    //做交換
        }
}


int main(void)
{
    int a[]={1,2,2,3,-1,0,1,1,2};
    selection_sort(a,9);
    for(int i=0;i<9;i++)
        printf("%d",a[i]);

return 0;

}