#include<stdio.h>
#define N 10
static int d=0;
void quicksort(int a[],int left, int right){
	int i,j,t,temp;
	if(left > right)
		return;
		
		temp = a[left] ; //temp中存的就是基准数
		i = left;
		j = right;
		while(i != j){
			//顺序很重要，要先从右往左找 
			while(a[j] >= temp && i < j)//找小于temp的
				j--;
			//再从右往左找
			while(a[i] <= temp && i < j)//找大于temp的
				i++;
				
			//交换两个数在数组中的位置
			if(i < j){   //当哨兵i和哨兵j没有相遇时 
				printf("此时a[%d]=%d，a[%d]=%d\n",i,j,a[i],a[j]);
				t = a[i];
				a[i] = a[j];
				a[j] = t;	  
			}		 	
		}
		// 最终将基准数归位
		a[left] = a[i];
		a[i] = temp;
		
		quicksort(a,left,i-1); //继续处理左边的 
		quicksort(a,i+1,right); //继续处理右边的 
		return;
	}



int main(void)
{
int a[N]={1,3,2,9,1,2,3,4,6,2};
quicksort(a,0,N-1);
for(int i=0;i<N;i++)
printf("%d ",a[i]);
    return 0;
}