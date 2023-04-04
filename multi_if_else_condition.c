#include <stdio.h>
int main()
{
    int Tk=100;
    scanf("%d", &Tk);
    if (Tk == 100)
    {
        printf("Burger Khabo");
    }
    else if (Tk > 100)
    {
        printf("Kacchi Khabo");
    }
    else
    {
        printf("Burger Khabo na");
    }
    return 0;
}