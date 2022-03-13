#include<stdio.h>
#include<malloc.h>
//这里必须说一下，书上代码有问题，getchar会读取\n
//如何用scanf读取单个字符呢，嘿嘿，就是%c前面加个空格，这样就会忽略前面的空行并把第一个非空字符输入
int main(void)
{
    struct Node
    {
        char ch;
        struct Node *next;
        
    } *first,*last,*p;
    
    p = (struct Node*)malloc(sizeof(struct Node));
    first = last = p;
    char ch;
    scanf(" %c",&ch);
    p->ch=ch;
    p->next = NULL;
    int i=2;
//上面建立第一个节点
    char ch1;

    while(i<=4)
    { 
        scanf(" %c",&ch1);
        p = (struct Node*)malloc(sizeof(struct Node));
        p->next = NULL;
        p->ch = ch1;
        last->next = p;
        last = p;
        i++;
    }   

    //输出
    p = first;
    int num=1;
    while(p!=NULL)
    {
        printf("第%d个字符%c的地址为:%ld\n",num,p->ch,p);
        p = p->next;
        num++;
    }
    return 0;
}
    