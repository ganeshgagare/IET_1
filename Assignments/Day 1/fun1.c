// 2md case
#include<stdio.h>
int add(int, int);
int main(){
    int a,b;
    printf("Enter a and b");
    scanf("%d %d", &a, &b);
    int result = add(a,b);
    printf("%d",result);

}

int add(int a, int b){
    int result = a + b;
    return result;
}