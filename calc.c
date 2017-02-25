#include<stdio.h>
void main()
{
    int c,n1,n2,sum;
    do
    {
        printf("Calculator");
        printf("1:Add,2:Sub,3:Mul,4:Div,5:Exit");
        printf("Enter choice");
        scanf("%d",&c);
        switch(c)
        {
            case 1 : printf("Addition");
                        printf("Enter 2 Nos :");
                        scanf("%d",&n1);
                        scanf("%d",&n2);
                        sum=n1+n2;
                        printf("sum is %d",sum);
                        break;
        }
    } while(c!=5);
}