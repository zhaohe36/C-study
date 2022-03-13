#include<stdio.h>
struct book {

char *name;



};
void len(struct book *p)
{
int charlen;
char *a;
a =p->name;
int i;
for(i=0;*a++!='\0';i++)
;
charlen = i;
printf("%d",charlen);


}



int main(void)
{

struct book a[]={"fuck"};
len(a);


return 0;

}