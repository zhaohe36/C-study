#include<stdio.h>
#include<string.h>
void sort(int n,char *a[])
{char *temp;
int i,j;
FILE *p;
for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
            {
                if(strlen(a[j])<strlen(a[j+1]))
                    {temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    }
            }
    }

p=fopen("sort.txt","w");
for(i=0;i<n;i++)
    fprintf(p,"%s\n",a[i]);

fclose(p);
}



int main(void)
{int i;
char str[6][100]={""};
char *text[6]={"sadas", "ds", "vfd", "wfs", NULL,NULL};
for(i=0;i<6;i++)
{scanf("%s",str[i]);
text[i]=str[i];
}


sort(6,text);

return 0;

}