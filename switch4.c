#include<stdio.h>
int main()
{
    int x,a,b,c;
    while(1)
    {
        printf("\nenter your choice\n");
        printf("1.check whether a a set of three numbers are length of isoscelec triangle\n");
        printf("2.check whether a set of three numbers are lenght of equilateral triangle\n");
        printf("3.check whethr a set of three numbers are lenght of right angled triangle\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("enter the three sides\n");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b||a==c||b==c)
            {
                printf("the triangle is isoscelec");
                break;
            }
            else
            {
                printf("the triangle is not isoscels");
                break;
            }
            case 2:
            printf("enter the three sides\n");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b&&b==c)
            {
                printf("equilateral triangle");
                break;
            }
            else
            {
                printf("not equilateral");
                break;
            }
            case 3:
            printf("enter the three values");
            scanf("%d %d %d",&a,&b,&c);
            if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            {
                printf("right angled triangle");
                break;
                
            }
            else
            {
                printf("not right angled triangle");
                break;
            }
            
        }
        
    }
    printf("\n");
    return 0;
}