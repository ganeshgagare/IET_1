#include<stdio.h>
void area_c(int);
int main()
{
    int rad;
    printf("Enter radius:");
    scanf("%d",&rad);
    area_c(rad);
}
void area_c(int rad)
{
    float area=3.142f*rad*rad;
    printf("Area is %f",area);
}
