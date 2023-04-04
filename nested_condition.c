#include<stdio.h>
int main()
{
    int Tk;
    scanf("%d", &Tk);
    if (Tk>=1000)
    {
    printf("Cox's Bazar Jabo\n");
    if (Tk>=1500)
    {
    printf("India Jabo\n");
    }
    else{
       printf("Dhaka Jabo\n"); 
    }
    printf("kothao Jabo na\n");
    }
    return 0;
}