#include<stdio.h>
int main()
{
    int x=1,y;
    while(1)
    {
    
    switch(x)
    {
        case 1:
        printf("\nenter the even number");
        scanf("%d",&y);
        if(y%2==0)
        {
            printf("\n%d",y+1);
            break;
        }
        else
        {
            printf("\ninvalid entry");
            break;
        }
    }
    }
    printf("\n");
    return 0;
    
}