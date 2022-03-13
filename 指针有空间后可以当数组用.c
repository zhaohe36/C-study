#include<stdio.h>
#include<malloc.h>
#include<string.h>
char *strcat2(char*str1,char*str2);
int main(void)
{
char *a;
a=strcat2("nizhen","niubi");
printf("%s",a);
return 0;
}


char *strcat2(char*str1,char*str2)
{
char *str;
int i;
str=(char*)malloc(strlen(str1)+strlen(str2)+1);
for(i=0;*str1!='\0';i++)
str[i]=*(str1++);
for(;*str2!='\0';i++)
str[i]=*(str2++);
str[i]='\0';
return str;

}