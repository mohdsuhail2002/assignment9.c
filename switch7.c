#include<stdio.h>
int main()
{
    float y,m;
    int x;
    while(1)
    {
    printf("enter your choice\n");
    printf("1.if your electricity bill is upto 50 units\n");
    printf("2.if your electricity bill is upto 150 units\n");
    printf("3.if your electricity bill is upto 250 units\n");
    printf("4.if your electricity bill is above 250 units\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("\nenter the units\n");
        scanf("%f",&y);
        printf("bill is rs.%f",y*0.50); 
        break;
        case 2:
        printf("enter the units\n");
        scanf("%f",&y);
        m=y-50;
        printf("bill is %f",m*0.75+50*0.5);
        break;
        case 3:
        printf("enter the units\n");
        scanf("%f",&y);
        m=y-150;
        printf("bill is %f",m*1.20+50*0.5+100*0.75);
        break;
        case 4:
        printf("enter the units\n");
        scanf("%f",&y);
        m=y-250;
        printf("bill is rs.%f",m*1.50+50*0.5+100*0.75+100*1.20);
        break;
    }
    }
    printf("\n");
    return 0;
}

