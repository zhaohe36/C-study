#include<stdio.h>
struct complex
{
    int real;
    int im;
};
struct complex cadd(struct complex a,struct complex b)
{
struct complex sum;
sum.real=a.real+b.real;
sum.im=a.im+b.im;
return sum;

}

struct complex cmult(struct complex a,struct complex b)
{
struct complex cub;
cub.real=a.real*b.real-a.im*b.im;
cub.im=a.im*b.real+b.im*a.real;
return cub;    
}

struct complex show(struct complex cub)
{char c='+';
    if(cub.im<0)
        c='-';
printf("复数为:%d%c%di,",cub.real,c,cub.im);
}


int main()
{

    struct complex a={1,10},b={1,-1};
    show(cmult(a,b));
    show(cadd(a,b));
    return 0;
}