#include<stdio.h>
int main(){
    int num1, num2=0;
    scanf("%d \n%d",&num1,&num2);
    int fir=num1*(num2%10); int sec=num1*((num2%100-(num2%10))/10); int thr=num1*(num2/100);
    printf("%d\n%d\n%d\n%d\n",fir,sec,thr,num1*num2);
}