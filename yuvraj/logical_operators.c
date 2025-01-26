#include <stdio.h>

int main(){
int a=1, b=1;
printf("the valur of a and b is %d\n", a&&b);
printf("the valur of a or b is %d\n", a||b);
printf("the value of not(a) is %d\n", !a);

if(a && b){
    printf("both the num are true \n");
}
    return 0;
}