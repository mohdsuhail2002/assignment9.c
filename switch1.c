#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
    printf("\nenter the month number");
    scanf("%d",&x);
    if(x>0&&x<13)
    {
    switch(x)
        {
            case 1:
            printf("\n31 days");
            break;
            case 2:
            printf("\n28/29 days");
            break;
            case 3:
            printf("\n31 days");
            break;
            case 4:
            printf("\n30 days");
            break;
            case 5:
            printf("\n31 days");
            break;
            case 6:
            printf("\n30 days");
            break;
            case 7:
            printf("\n31 days");
            break;
            case 8:
            printf("\n31 days");
            break;
            case 9:
            printf("\n30 days");
            break;
            case 10:
            printf("\n31 days");
            break;
            case 11:
            printf("\n30 days");
            break;
            case 12:
            printf("31 days");
            break;
        }
    }
        
    
    
    }
    printf("\n");
    return 0;
}