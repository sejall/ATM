#include <stdio.h>


int main()
{
    int x;
    float y;

    scanf("%d",&x);

    scanf("%f",&y);
    if(0<x && x<=2000 && 0<=y && y<=2000)
    {
        if(x%5!=0 || y<x+0.50)
            printf("%.2f",y);
        else
            printf("%.2f",y-x-0.50);
    }
    return 0;
}
