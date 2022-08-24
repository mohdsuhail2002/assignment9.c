#include<stdio.h>
int main()
{
    int x,y;
    while(1)
    { 

        printf("\nenter your choice");
        printf("\n1.convert postive number into negative number");
        printf("\n2.convert negative number into positive number");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
        printf("\nenter the number");
        scanf("%d",&y);
        printf("\n%d",y-(y*2));
        break;
        case 2:
        printf("\nenter the number");
        scanf("%d",&y);
        printf("\n%d",y-(2*y));
        break;
        }

    }
    printf("\n");
    return 0;
}
