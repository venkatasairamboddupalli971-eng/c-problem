#include<stdio.h>
int main(){
    float pi=3.14;
    int r;
    printf("Enter the value of r:");
    scanf("%d",&r);
    float area;
    area=pi*r*r;
    printf("%f",area);
    return 0;
}