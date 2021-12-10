#include<stdio.h>
//如果是数组处理，比如说a[20]，传送的a就是数组首地址，如果是对象，比如说s，那么传输的必须是&s地址;
//数组内字符串，比如说*m，赋值的时候是m=""，赋值的是字符串的首地址，如果*m就是首地址的字符
struct Book
    {char *m,*n;

        /* data */
    }s={"ad","ed"};


void haha(struct Book *aa)
{

    *aa->m ='g';


}

int main(void)
{   
    struct Book *p=&s;
    printf("%c",*p->n);
    return 0;
    





}