#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
while(1)
{
    
    printf("\nenter your choice");
    printf("\n1.addition");
    printf("\n2.subtraction");
    printf("\n3.multiplication");
    printf("\n4.division");
    printf("\n5.exit\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("enter the two values");
        scanf("%d %d",&a,&b);
        printf("sum is %d",a+b);
        break;
        case 2:
        printf("enter the two values");
        scanf("%d %d",&a,&b);
        printf("subtraction is %d",a-b);
        break;
        case 3:
        printf("enter the two values");
        scanf("%d %d",&a,&b);
        printf("multiplication is %d",a*b);
        break;
        case 4:
        printf("enter the two values");
        scanf("%d %d",&a,&b);
        printf("division is %d",a/b);
        break;
        case 5:
        exit(0);

    }

}
printf("\n");
return 0;
}
