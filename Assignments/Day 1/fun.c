// 1st case
#include<stdio.h>
void add(int , int);
int main(){
    int a, b;
    printf("Enter the values of a and b");
    scanf("%d %d", &a, &b);
    add(a,b);

}
void add(int a, int b){
    int result = a+b;
    printf("the result is %d", result);
}