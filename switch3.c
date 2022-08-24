#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
        printf("enter the day number\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("its monday,have a great week\n");
            break;
            case 2:
            printf("its tuesday,throw away the negative energy\n");
            break;
            case 3:
            printf("its wednesday,keep the hard work on\n");
            break;
            case 4:
            printf("its thursday, beleive in yourself\n");
            break;
            case 5:
            printf("its friday,a day to worship the almighty\n");
            break;
            case 6:
            printf("its saturday,a day to enjoy with friend\n");
            break;
            case 7:
            printf("its sunday,a day to spend good quality time with family\n");
            break;




        }
    }
    printf("\n");
    return 0;
}