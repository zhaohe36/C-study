#include<stdio.h>
struct book
{
char *name;
int price;
char *author;
char *public;
};


int lenth(struct book *p)

{//这里进行判定name的字符长度
int charlen;
char *a;
a =p->name;
int i;
for(i=0;*(a+i)!='\0';i++)
;
charlen = i;
return charlen;
}


int main(void)
{
    int i,j,mini,charlen;
    
    struct book a[4]={{"me",100,"me","me"},{"hahaha",10,"dada","dadadad"},{"h",1,"w","dwa"},{"ab",111,"222d","111da"}};
    struct book min;
    for(i=0;i<3;i++)

       {    min =a[i];
            mini=i;
           for(j=i+1;j<4;j++)
            {
            if(lenth(&min)>lenth(&a[j]))
               { min =a[j];
                mini =j;}//mini=j是用来计数的，是下标为几的最小，然后后面用a[i]与a[mini]交换
            }
            a[mini]=a[i];
            a[i]= min;
            
            

       }

    for(i=0;i<4;i++)
        printf("%s\n",a[i].name);
    return 0;
}
