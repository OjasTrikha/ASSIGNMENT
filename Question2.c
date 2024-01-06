#include<stdio.h>

void main()
{
    int a,b,c,e,f,g;
    printf("Enter 1st time-");
    printf("Hour-"); scanf("%d",&a);
    printf("Minutes-"); scanf("%d",&b);
    printf("Second-"); scanf("%d",&c);
    printf("Enter 2nd time-");
    printf("Hour-"); scanf("%d",&e);
    printf("Minutes-"); scanf("%d",&f);
    printf("Second-"); scanf("%d",&g);
    printf("1st time-%d:%d:%d",a,b,c);
    printf("\n2nd time-%d:%d:%d",e,f,g);
    printf("\nTime difference-%d:%d:%d",a-e,b-f,c-g);
}
