
#include<stdio.h>
int main()
{
    int x,y;
    while(1)
    {
        printf("\nenter the option");
        printf("\n1.check leap year");
        printf("\n2.check not a leap year");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("\nenter the year");
            scanf("%d",&y);
            if(y%4==0||y%400==0)
            {
                printf("\nleap year");
                break;
            }
            case 2:
            printf("\nenter the year");
            scanf("%d",&y);
            if(y%4==0||y%400==0)
            {
                printf("\nleap year");
                break;
            }
            else
            {
                printf("\nnot a leap year");
                break;
            }
        
        }
    }
}