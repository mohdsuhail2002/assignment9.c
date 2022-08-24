#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
        printf("\nenter your choce\n");
        printf("1\n");
        printf("2\n");
        printf("3\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("good");
            break;
            case 2:
            printf("better");
            break;
            case 3:
            printf("best");
            break;
            default:
            printf("invalid");


        }
    }
    printf("\n");
    return 0;
}