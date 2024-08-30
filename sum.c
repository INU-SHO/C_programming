#include <stdio.h>
int main(void){
    // Your code here!
    printf("Input three integers: \n");
    
    double a, b, c, sum, ave;
    
    printf("a: ");
    scanf("%lf", &a); // 入力a
    printf("b: ");
    scanf("%lf", &b); // 入力b
    printf("c: ");
    scanf("%lf", &c); // 入力c
    
    sum = a + b + c;
    ave = sum / 3;
    
    printf("Sum is %.1f, Average is %.1f.\n", sum, ave);
    
    return 0;
}