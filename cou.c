#include<stdio.h>

int main(void)
{
FILE *p;
int a[3]={10,20,0};
int b[2]={0,0};
p=fopen("ttt.bin","wb");
fwrite(a+1,4,1,p);
fclose(p);
p=fopen("ttt.bin","rb");
fread(b,4,1,p);
printf("%d",*b);
fclose(p);
return 0 ;

}
