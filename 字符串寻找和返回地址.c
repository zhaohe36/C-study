//小作修改就可以返回指针地址值，可以用于函数与函数直接交流，还是不错;

#include<stdio.h>
int strcount(char*a)//先设立判断字符串数量的东西
{
    int i =0;
    for(;*(a+i)!='\0';i++)
        ;
    return (i);
}
long strstr2(char*a,char*b) //a是要找到的字符串，b是大字符串
{
    int la = strcount(a),lb = strcount(b);
    int head,last,temp=0;//head是b地址中找到与a中第一个字符相同的地方
    //temp为有效戳
    for (head=0;head<=lb;head++)//限制数组的计算次数lb,从b的第一个开始
    {
        if(*a==*(b+head))//如果第一个字符找到了，则进行下面的循环
            {
                for (last = head;*(a+(last-head))==*(b+last);)//a递增，b也从head开始递增,直到a整个字符串的长度都匹配,则给成功戳temp=1
                    {   last++;
                        if(last-head==la)
                            {temp = 1;
                            break;}
                        
                    }
            }
    if(temp ==1)//判断是否找到，减少计算次数，避免不必要的损耗
    break;
    }
    if (temp ==1)
    {printf("找到了，地址为%ld,找到的后面字符串为%s",(b+head),(b+head));//这里我图省事，就没有一个个输出字符，那样才准确.这个是从head输出到b的结尾
    return(b+head);}
    else
    {printf("none");
    return 0;
    }
}
int main(void)
{
char a[]="youfuck";
printf("%ld",strstr2("you",a));
return 0;
}
