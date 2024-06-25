
#include <stdio.h>
int main() {
    // out put
    // printf("Hello, World!\n");       // printf is a function output

    // input
    int a;
    float c;
    char b;

    printf("Enter the number: ");
    scanf("%d",&a); // & is a address of a
    printf("the enterd number is %d\n",a);

    printf("Enter the float: ");
    scanf("%f",&c); // & is a address of c
    printf("the enterd number is %f\n",c);

    printf("Enter the char: ");
    scanf(" %c",&b); // %C is obsorve carfuly
    printf("the enterd char is %c\n", b);

    return 0;
}




