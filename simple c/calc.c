#include<stdio.h>
void calc(int a, int b){
    printf("\n addti=%d",a+b);
    printf("\n sub=%d",a-b);
    printf("\n multi=%d",a*b);
    printf("\n div=%d",a/b);
}
float areaofcircle(int r){
    float area=3.14*r*r;
    return 0;
}
main(){
    calc(100,20);
    printf("\n=======================");
    calc(10,3);
    printf("\n=======================");
    float ans= areaofcircle(2);
    printf("\n area of circle=%f",ans);
    printf("\n=======================");
    printf("\n area of circle=%f",areaofcircle(3));
}