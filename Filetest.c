#include<stdio.h>
int main(void)
{
    FILE *p;
    int a,i=0;
    char b[100];
    if((p=fopen("C:\\Users\\15437\\Desktop\\c2\\fuck.txt","r"))==NULL)
    {
    printf("打开文件失败");
    exit(1);
    }
    fscanf(p,"%s",b);
    fclose(p);

    printf("%s",b);

    return 0;
}