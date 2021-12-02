//小作修改就可以返回指针地址值，可以用于函数与函数直接交流，还是不错;

#include<stdio.h>
int strcount(char*a)//先设立判断字符串数量的东西
{
    int i =0;
    for(;*(a+i)!='\0';i++)
        ;
    return (i);
}
void strstr2(char*a,char*b) //a是要找到的字符串，b是大字符串
{
    int la = strcount(a),lb = strcount(b);
    int head,last,temp=0;//head是b地址中找到与a中第一个字符相同的地方
    //temp为有效戳
    for (head=0;head<=lb;head++)//限制数组的计算次数lb,从b的第一个开始
    {
        if(*a==*(b+head))//如果第一个字符找到了，则进行下面的循环
            {
                for (last = head+1;*(a+(last-head))==*(b+last);last++)//a递增1，b也从head开始递增1,直到a整个字符串的长度都匹配,则给成功戳temp=1
                    {
                        if(last-head==la-1) //由于这里last不增加第一个head，故last-head要比la小1
                            temp = 1;
                    }
            }
    if(temp ==1)//判断是否找到，减少计算次数，避免不必要的损耗
    break;
    }
    if (temp ==1)
    printf("找到了，地址为%ld,找到的后面字符串为%s",(b+head),(b+head));//这里我图省事，就没有一个个输出字符，那样才准确.这个是从head输出到b的结尾
    else
    printf("none");
}
int main(void)
{
char a[]="youfuck";
strstr2("youf",a);
return 0;
}
